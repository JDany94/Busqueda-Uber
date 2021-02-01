#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cargparm.h>
#include <ingrparm.h>
#include <info.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_IngrParam_clicked();
    void on_CargParm_clicked();
    void on_close_clicked();
    void on_info_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
