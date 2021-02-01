#include "mapa.h"
#include "ui_mapa.h"

Mapa::Mapa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Mapa)
{
    ui->setupUi(this);
    setWindowTitle("Entorno");
    ui->mapLabel->setText("hola");
}

Mapa::~Mapa()
{
    delete ui;
}



void Mapa::on_map_linkActivated(const QString &link)
{
    //ui->mapLabel->setText("hola");

    //ui->num_obst_label->setText(QString::number(entorno.getM()) + "X" + QString::number(entorno.getN()));
}

void Mapa::printMap() {

}
