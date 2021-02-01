#include "ingrparm.h"
#include "ui_ingrparm.h"
#include <QTableWidget>
#include <windows.h>
#include <cmath>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QMessageBox>
#include <ctime>
#include <windows.h>

int tamanoMapa = 12; //PlainText
Entorno entorno;
bool generado = false;

IngrParm::IngrParm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IngrParm)
{
    ui->setupUi(this);
    setWindowTitle("Parametros Manueles");
    setWindowFlags(Qt::WindowMaximizeButtonHint);
}

IngrParm::~IngrParm()
{
    delete ui;
}

double performancecounter_diff(LARGE_INTEGER *a, LARGE_INTEGER *b)
{
  LARGE_INTEGER freq;
  QueryPerformanceFrequency(&freq);
  return (double)(a->QuadPart - b->QuadPart) / (double)freq.QuadPart;
}

void IngrParm::printMapa() {
    ui->num_obst_label->setText(QString::number(entorno.getNumObst()));
    QString mapa;
    mapa = "";
    for (int i = 0; i < entorno.getN(); i++)
        {
            for (int j = 0; j < entorno.getM(); j++)
            {  
                mapa = mapa + entorno.Mapa[j][i] + " ";
            }
            mapa = mapa + "\n";
        }
    ui->mapLabel2_2->setPlainText(mapa);
}

void IngrParm::on_generar_entorno_boton_clicked()
{
    bool correcto = true;
    entorno.clearEntorno();
    ui->label_obst_exist->setText("");//Limpia mensajes de error

    if (ui->entorno_M->text().toInt() > LIMITE || ui->entorno_N->text().toInt() > LIMITE){
        ui->label_entorno->setText("Limite de entorno 200x200");
        printMapa();
        correcto = false;
    }
    if ( ui->entorno_M->text().toInt() <= 0 ||
         ui->entorno_N->text().toInt() <= 0 ||
         ui->origen_M->text().toInt() <= 0 ||
         ui->origen_N->text().toInt() <= 0 ||
         ui->destino_M->text().toInt() <= 0 ||
         ui->destino_N->text().toInt() <= 0 )
    {
        ui->label_entorno->setText("Faltan parametros");
        printMapa();
        correcto = false;
    }
    if (ui->origen_M->text().toInt() > ui->entorno_M->text().toInt() || ui->origen_N->text().toInt() > ui->entorno_N->text().toInt() ){
        ui->label_entorno->setText("Origen no valido");
        printMapa();
        correcto = false;
    }
    if (ui->destino_M->text().toInt() > ui->entorno_M->text().toInt() || ui->destino_N->text().toInt() > ui->entorno_N->text().toInt() ){
        ui->label_entorno->setText("Destino no valido");
        printMapa();
        correcto = false;
    }
    if (ui->origen_M->text().toInt() == ui->destino_M->text().toInt() && ui->origen_N->text().toInt() == ui->destino_N->text().toInt() ){
        ui->label_entorno->setText("Origen y destino no pueden ser iguales");
        printMapa();
        correcto = false;
    }
    if (correcto){
        //Obtener Dimensiones
        entorno.setM(ui->entorno_M->text().toInt());
        entorno.setN(ui->entorno_N->text().toInt());

        //Obtener Origen
        Origen origen;
        origen.setM(ui->origen_M->text().toInt()-1);
        origen.setN(ui->origen_N->text().toInt()-1);
        origen.setValor(ORIGEN);
        entorno.setOrigen(origen);

        //Obtener Destino
        Destino destino;
        destino.setM(ui->destino_M->text().toInt()-1);
        destino.setN(ui->destino_N->text().toInt()-1);
        destino.setValor(DESTINO);
        entorno.setDestino(destino);

        //Generar Entorno
        entorno.setMapa(ui->random_obst->text().toInt());
        llenarObstaculos();
        ui->num_obst_label->setText(QString::number(entorno.getNumObst()));
        generado = true;

        //Mostrar Entorno
        ui->label_entorno->setText("");//Limpia mensajes de error
        QFont font = ui->mapLabel2_2->font();
        font.setPointSize(tamanoMapa);
        ui->mapLabel2_2->setFont(font);
        printMapa();
    }
}

void IngrParm::setCamino(QVector <Casilla> camin, bool show)
{
    if (camin.size() == 0){
       ui->label_obst_exist->setText("No hay camino o son adyacentes");
       printMapa();
    }
    else{
        if(entorno.casillas.isEmpty()){
            ui->label_obst_exist->setText("No hay entorno");
        }
        else{
            for (int i = 0; i < entorno.getM(); i++){
                for (int j = 0; j < entorno.getN(); j++){
                    if(entorno.Mapa[i][j]==NODOSEXPAND || entorno.Mapa[i][j]==CAMINO){
                        entorno.Mapa[i][j]=NADA;
                    }
                }
            }
            if(show){
                for (int i = 1; i < camin[0].getNodosExpandidos().size()-1; i++){
                    entorno.Mapa[camin[0].getNodosExpandidos()[i].getM()][camin[0].getNodosExpandidos()[i].getN()] = NODOSEXPAND;
                }
            }
            for (int i = 1; i < camin.size()-1; i++)
            {
                entorno.Mapa[camin[i].getM()][camin[i].getN()] = CAMINO;
            }
            printMapa();
            for (int i = 0; i < entorno.getM(); i++){
                for (int j = 0; j < entorno.getN(); j++){
                    if(entorno.Mapa[i][j]==NODOSEXPAND || entorno.Mapa[i][j]==CAMINO){
                        entorno.Mapa[i][j]=NADA;
                    }
                }
            }
            ui->label_obst_exist->setText("Nodos expandidos: " + QString::number(camin[0].getNodosExpandidos().size()-2) + " | Camino mas corto: " + QString::number(camin.size()-2));
        }
    }
}

void IngrParm::on_buscar_man_clicked()
{
    LARGE_INTEGER t_ini, t_fin;

    QueryPerformanceCounter(&t_ini);

    ui->mapLabel2_2->setPlainText("");

    entorno.casillas.clear();
    entorno.setCasillas();
    entorno.vecinos.clear();
    entorno.setVecinos();

    QVector <Casilla> camin;
    aEstrella Manhattan;

    camin = Manhattan.aestrella(entorno,MANHATTAN);

    setCamino(camin,ui->check_showNodos->isChecked());

    QueryPerformanceCounter(&t_fin);

    if (camin.size() != 0 && !entorno.casillas.isEmpty())
        ui->label_obst_exist->setText(ui->label_obst_exist->text() + " | Tiempo de ejecucion: " + QString::number(performancecounter_diff(&t_fin, &t_ini)) + "seg");
}

void IngrParm::on_buscar_eucl_clicked()
{
    LARGE_INTEGER t_ini, t_fin;

    QueryPerformanceCounter(&t_ini);

    ui->mapLabel2_2->setPlainText("");

    entorno.casillas.clear();
    entorno.setCasillas();
    entorno.vecinos.clear();
    entorno.setVecinos();

    QVector <Casilla> camin;
    aEstrella Euclediana;

    camin = Euclediana.aestrella(entorno,EUCLIDIANA);

    setCamino(camin,ui->check_showNodos->isChecked());

    QueryPerformanceCounter(&t_fin);

    if (camin.size() != 0 && !entorno.casillas.isEmpty())
        ui->label_obst_exist->setText(ui->label_obst_exist->text() + " | Tiempo de ejecucion: " + QString::number(performancecounter_diff(&t_fin, &t_ini)) + "seg");
}

void IngrParm::llenarObstaculos (){
    for (int i = 0; i < entorno.getM(); i++)
        {
            for (int j = 0; j < entorno.getN(); j++)
            {
                if(entorno.Mapa[i][j] == OBSTACULO){
                    Obstaculo obst;
                    obst.setM(i);
                    obst.setN(j);
                    entorno.setObstaculo(obst);
                }
            }
        }
}

void IngrParm::on_save_boton_clicked()
{
    if (entorno.getM() <= 0){
        ui->label_obst_exist->setText("No hay entorno para guardar");
    }
    else {
        QFile archivo;
        QTextStream io;
        QString nombreArch;
        nombreArch = QFileDialog::getSaveFileName(this, "Guardar");
        if (nombreArch.isEmpty())
            return;
        archivo.setFileName(nombreArch);
        archivo.open(QIODevice::Text | QIODevice::WriteOnly);
        if (!archivo.isOpen()){
            QMessageBox::critical(this, "Error", archivo.errorString());
            return;
        }
        io.setDevice(&archivo);

        //Guarda las dimensiones
        io << "Dimensiones\n";
        io << QString::number(entorno.getM()) + "\n";
        io << QString::number(entorno.getN()) + "\n";
        //Guarda el origen
        io << "Origen\n";
        io << QString::number(entorno.getOrigen().getM()+1) + "\n";
        io << QString::number(entorno.getOrigen().getN()+1) + "\n";
        //Guarda el destino
        io << "Destino\n";
        io << QString::number(entorno.getDestino().getM()+1) + "\n";
        io << QString::number(entorno.getDestino().getN()+1) + "\n";
        //Guarda los obstaculos
        io << "Obstaculos\n";
        io << QString::number(entorno.getNumObst()) + "\n";
        for (int i = 0;  i < entorno.getObstaculos().size(); i++) {
            io << "\n";
            io << QString::number(entorno.getObstaculos()[i].getM()+1) + "\n";
            io << QString::number(entorno.getObstaculos()[i].getN()+1) + "\n";
        }
        archivo.flush();
        archivo.close();
    }
}

void IngrParm::on_aumentarMapa_clicked()
{
    QFont font = ui->mapLabel2_2->font();
    tamanoMapa++;
    font.setPointSize(tamanoMapa);
    ui->mapLabel2_2->setFont(font);
}

void IngrParm::on_reducirMapa_clicked()
{
    QFont font = ui->mapLabel2_2->font();
    tamanoMapa--;
    font.setPointSize(tamanoMapa);
    ui->mapLabel2_2->setFont(font);
}

void IngrParm::on_quitar_obst_boton_clicked()
{
    if (entorno.getM() == 0 || entorno.getN() == 0 || ui->obst_M->text().toInt() == 0 || ui->obst_N->text().toInt() == 0 || ui->obst_M->text().toInt() > entorno.getM() || ui->obst_N->text().toInt() > entorno.getN() ){
        if (entorno.getM() == 0 || entorno.getN() == 0)
            ui->label_obst_exist->setText("No se ha generado ningun entorno");
        if (ui->obst_M->text().toInt() == 0 || ui->obst_N->text().toInt() == 0 || ui->obst_M->text().toInt() > entorno.getM() || ui->obst_N->text().toInt() > entorno.getN())
            ui->label_obst_exist->setText("Coordenadas invalidas");
    }
    else {
        //Crear e insertar el obstaculo en el Entorno
        Obstaculo obst(ui->obst_M->text().toInt()-1,ui->obst_N->text().toInt()-1);
        if (entorno.obstExiste(obst)){
            entorno.removeObstaculo(obst);
            printMapa();
        }
        else {
            ui->label_obst_exist->setText("No hay obstaculos en esa casilla");
        }
    }
}

void IngrParm::on_obst_boton_clicked()
{
    if (entorno.getM() == 0 || entorno.getN() == 0 || ui->obst_M->text().toInt() == 0 || ui->obst_N->text().toInt() == 0 || ui->obst_M->text().toInt() > entorno.getM() || ui->obst_N->text().toInt() > entorno.getN() ){
        if (entorno.getM() == 0 || entorno.getN() == 0)
            ui->label_obst_exist->setText("No se ha generado ningun entorno");
        if (ui->obst_M->text().toInt() == 0 || ui->obst_N->text().toInt() == 0 || ui->obst_M->text().toInt() > entorno.getM() || ui->obst_N->text().toInt() > entorno.getN())
            ui->label_obst_exist->setText("Coordenadas invalidas");
    }
    else {
        //Crear e insertar el obstaculo en el Entorno
        Obstaculo obst(ui->obst_M->text().toInt()-1,ui->obst_N->text().toInt()-1);
        if (entorno.obstExiste(obst) || (obst.getM() == entorno.getOrigen().getM() && obst.getN() == entorno.getOrigen().getN()) || (obst.getM() == entorno.getDestino().getM() && obst.getN() == entorno.getDestino().getN()) ){
            ui->label_obst_exist->setText("Ya existe un objeto en esa posicion");
        }
        else {
            entorno.setObstaculo(obst);
            printMapa();
        }
    }
}

void IngrParm::on_clear_boton_clicked()
{
    entorno.clearEntorno();
    ui->entorno_M->setText("");
    ui->entorno_N->setText("");
    ui->origen_M->setText("");
    ui->origen_N->setText("");
    ui->destino_M->setText("");
    ui->destino_N->setText("");
    ui->obst_M->setText("");
    ui->obst_N->setText("");
    ui->label_entorno->setText("");
    ui->label_obst_exist->setText("");
    ui->random_obst->setText("");
    ui->num_obst_label->setText(QString::number(entorno.getNumObst()));
    printMapa();
}

void IngrParm::on_close_clicked()
{
    entorno.clearEntorno();
    close();
}
