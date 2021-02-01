#ifndef CARGPARM_H
#define CARGPARM_H

#include <QDialog>
#include <entorno.h>

namespace Ui {
class CargParm;
}

class CargParm : public QDialog
{
    Q_OBJECT

public:
    explicit CargParm(QWidget *parent = nullptr);
    ~CargParm();

private slots:

    //Main
    void setCamino(QVector<Casilla> camin, bool show);
    void printMapa();

    //Cargar
    void on_boton_cargar_clicked();

    //Buscar
    void on_buscar_manhattan_clicked();
    void on_buscar_euclidiana_clicked();

    //Close
    void on_close_clicked();

    //Clear
    void on_clear_boton_clicked();


    //Zoom
    void on_aumentarMapa_clicked();
    void on_reducirMapa_clicked();

private:
    Ui::CargParm *ui;
};

#endif // CARGPARM_H
