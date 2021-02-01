#include "cargparm.h"
#include "ui_cargparm.h"
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QMessageBox>
#include <aestrella.h>
#include <windows.h>

int tamanoMapaC = 12;
Entorno entornoC;

CargParm::CargParm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CargParm)
{
    ui->setupUi(this);
    setWindowTitle("Cargar parametros");
    setWindowFlags(Qt::WindowMaximizeButtonHint);
}

CargParm::~CargParm()
{
    delete ui;
}

double performancecounter_diffC(LARGE_INTEGER *a, LARGE_INTEGER *b)
{
  LARGE_INTEGER freq;
  QueryPerformanceFrequency(&freq);
  return (double)(a->QuadPart - b->QuadPart) / (double)freq.QuadPart;
}

void CargParm::printMapa() {
    ui->num_obst_labelC->setText(QString::number(entornoC.getNumObst()));
    QString mapa;
    mapa = "";
    for (int i = 0; i < entornoC.getN(); i++)
        {
            for (int j = 0; j < entornoC.getM(); j++)
            {
               mapa = mapa + entornoC.Mapa[j][i] + " ";
            }
            mapa = mapa + "\n";
        }
    ui->mapLabelC->setPlainText(mapa);
}

void CargParm::on_boton_cargar_clicked()
{
    QFile archivo;
    QTextStream io;
    QString contenido, nombreArch;
    nombreArch = QFileDialog::getOpenFileName(this, "Abrir");
    if (nombreArch.isEmpty())
        return;
    ui->name_arch->setText(nombreArch);
    archivo.setFileName(nombreArch);
    archivo.open(QIODevice::Text | QIODevice::ReadOnly);
    if (!archivo.isOpen()){
        QMessageBox::critical(this, "Error", archivo.errorString());
        return;
    }
    io.setDevice(&archivo);

    entornoC.clearEntorno();
    //Llenar el entornoC
    //Dimensiones
    io.readLine();
    contenido = io.readLine();
    entornoC.setM(contenido.toInt());
    contenido = io.readLine();
    entornoC.setN(contenido.toInt());
    ui->label_dimensiones->setText(QString::number(entornoC.getM()) + "x" + QString::number(entornoC.getN()));

    //Origen
    Origen origen;
    io.readLine();
    contenido = io.readLine();
    origen.setM(contenido.toInt()-1);
    contenido = io.readLine();
    origen.setN(contenido.toInt()-1);
    origen.setValor(ORIGEN);
    entornoC.setOrigen(origen);
    ui->label_origen->setText(QString::number(entornoC.getOrigen().getM()+1) + "," + QString::number(entornoC.getOrigen().getN()+1));

    //Destino
    Destino destino;
    io.readLine();
    contenido = io.readLine();
    destino.setM(contenido.toInt()-1);
    contenido = io.readLine();
    destino.setN(contenido.toInt()-1);
    destino.setValor(DESTINO);
    entornoC.setDestino(destino);
    ui->label_destino->setText(QString::number(entornoC.getDestino().getM()+1) + "," + QString::number(entornoC.getDestino().getN()+1));

    entornoC.setMapa(0);

    //Obstaculos
    Obstaculo obst;
    io.readLine();
    contenido = io.readLine();
    int numObst = contenido.toInt();
    for (int i = 1; i <= numObst ; i++){
        io.readLine();
        contenido = io.readLine();
        obst.setM(contenido.toInt()-1);
        contenido = io.readLine();
        obst.setN(contenido.toInt()-1);
        entornoC.setObstaculo(obst);
    }
    ui->num_obst_labelC->setText(QString::number(entornoC.getNumObst()));

    QFont font = ui->mapLabelC->font();
    font.setPointSize(tamanoMapaC);
    ui->mapLabelC->setFont(font);
    printMapa();
    archivo.close();
}

void CargParm::on_clear_boton_clicked()
{
    entornoC.clearEntorno();
    ui->label_dimensiones->setText("");
    ui->label_origen->setText("");
    ui->label_destino->setText("");
    ui->name_arch->setText("");
    ui->num_obst_labelC->setText(QString::number(entornoC.getNumObst()));
    printMapa();
}

void CargParm::setCamino(QVector <Casilla> camin, bool show)
{
    if (camin.size() == 0){
       ui->name_arch->setText("No hay camino o son adyacentes");
       printMapa();
    }
    else{
        if(entornoC.casillas.isEmpty()){
            ui->name_arch->setText("No hay entorno");
        }
        else{
            for (int i = 0; i < entornoC.getM(); i++){
                for (int j = 0; j < entornoC.getN(); j++){
                    if(entornoC.Mapa[i][j]==NODOSEXPAND || entornoC.Mapa[i][j]==CAMINO){
                        entornoC.Mapa[i][j]=NADA;
                    }
                }
            }
            if(show){
                for (int i = 1; i < camin[0].getNodosExpandidos().size()-1; i++){
                    entornoC.Mapa[camin[0].getNodosExpandidos()[i].getM()][camin[0].getNodosExpandidos()[i].getN()] = NODOSEXPAND;
                }
            }
            for (int i = 1; i < camin.size()-1; i++)
            {
                entornoC.Mapa[camin[i].getM()][camin[i].getN()] = CAMINO;
            }
            printMapa();
            for (int i = 0; i < entornoC.getM(); i++){
                for (int j = 0; j < entornoC.getN(); j++){
                    if(entornoC.Mapa[i][j]==NODOSEXPAND || entornoC.Mapa[i][j]==CAMINO){
                        entornoC.Mapa[i][j]=NADA;
                    }
                }
            }
            ui->name_arch->setText("Nodos expandidos: " + QString::number(camin[0].getNodosExpandidos().size()-2) + " | Camino mas corto: " + QString::number(camin.size()-2));
        }
    }
}

void CargParm::on_buscar_manhattan_clicked()
{
    LARGE_INTEGER t_ini, t_fin;

    QueryPerformanceCounter(&t_ini);

    ui->mapLabelC->setPlainText("");

    entornoC.casillas.clear();
    entornoC.setCasillas();
    entornoC.vecinos.clear();
    entornoC.setVecinos();

    QVector <Casilla> camin;
    aEstrella Manhattan;

    camin = Manhattan.aestrella(entornoC,MANHATTAN);

    setCamino(camin,ui->check_showNodos->isChecked());

    QueryPerformanceCounter(&t_fin);

    if (camin.size() != 0 && !entornoC.casillas.isEmpty())
        ui->name_arch->setText(ui->name_arch->text() + " | Tiempo de ejecucion: " + QString::number(performancecounter_diffC(&t_fin, &t_ini)) + "seg");
}

void CargParm::on_buscar_euclidiana_clicked()
{
    LARGE_INTEGER t_ini, t_fin;

    QueryPerformanceCounter(&t_ini);

    ui->mapLabelC->setPlainText("");

    entornoC.casillas.clear();
    entornoC.setCasillas();
    entornoC.vecinos.clear();
    entornoC.setVecinos();

    QVector <Casilla> camin;
    aEstrella Euclediana;

    camin = Euclediana.aestrella(entornoC,EUCLIDIANA);

    setCamino(camin,ui->check_showNodos->isChecked());

    QueryPerformanceCounter(&t_fin);

    if (camin.size() != 0 && !entornoC.casillas.isEmpty())
        ui->name_arch->setText(ui->name_arch->text() + " | Tiempo de ejecucion: " + QString::number(performancecounter_diffC(&t_fin, &t_ini)) + "seg");
}

void CargParm::on_aumentarMapa_clicked()
{
    QFont font = ui->mapLabelC->font();
    tamanoMapaC++;
    font.setPointSize(tamanoMapaC);
    ui->mapLabelC->setFont(font);
}

void CargParm::on_reducirMapa_clicked()
{
    QFont font = ui->mapLabelC->font();
    tamanoMapaC--;
    font.setPointSize(tamanoMapaC);
    ui->mapLabelC->setFont(font);
}

void CargParm::on_close_clicked()
{
    entornoC.clearEntorno();
    close();
}
