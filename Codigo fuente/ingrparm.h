#ifndef INGRPARM_H
#define INGRPARM_H

#include <QDialog>
#include <entorno.h>
#include <aestrella.h>

namespace Ui {
class IngrParm;
}

class IngrParm : public QDialog
{
    Q_OBJECT

public:
    explicit IngrParm(QWidget *parent = nullptr);
    ~IngrParm();

private slots:

    //Main
    void on_generar_entorno_boton_clicked();
    void printMapa();
    void llenarObstaculos();
    void setCamino(QVector <Casilla> camin, bool show);

    //Clear entorno
    void on_clear_boton_clicked();

    //Buscar caminos
    void on_buscar_man_clicked();
    void on_buscar_eucl_clicked();

    //Save
    void on_save_boton_clicked();

    //Zoom
    void on_aumentarMapa_clicked();
    void on_reducirMapa_clicked();

    //Obstaculos manuales
    void on_obst_boton_clicked();
    void on_quitar_obst_boton_clicked();

    //Close
    void on_close_clicked();

private:
    Ui::IngrParm *ui;
};

#endif // INGRPARM_H
