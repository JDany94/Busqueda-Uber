#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("IA");
    this->setFixedSize(this->width(),this->height());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_IngrParam_clicked()
{
    IngrParm *ventana = new IngrParm;
    ventana->setModal(true);
    ventana->show();
}

void MainWindow::on_CargParm_clicked()
{
    CargParm *ventana = new CargParm;
    ventana->setModal(true);
    ventana->show();
}

void MainWindow::on_close_clicked()
{
    close();
}

void MainWindow::on_info_clicked()
{
    Info *ventana = new Info;
    ventana->setModal(true);
    ventana->show();
}
