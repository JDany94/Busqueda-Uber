#include "info.h"
#include "ui_info.h"

Info::Info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Info)
{
    ui->setupUi(this);
    setWindowTitle("Informacion");
    this->setFixedSize(this->width(),this->height());
}

Info::~Info()
{
    delete ui;
}

void Info::on_back_clicked()
{
    close();
}
