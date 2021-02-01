#ifndef MAPA_H
#define MAPA_H

#include <QDialog>

namespace Ui {
class Mapa;
}

class Mapa : public QDialog
{
    Q_OBJECT

public:
    explicit Mapa(QWidget *parent = nullptr);
    ~Mapa();

private slots:

    void printMap ();

    void on_map_linkActivated(const QString &link);

private:
    Ui::Mapa *ui;
};

#endif // MAPA_H
