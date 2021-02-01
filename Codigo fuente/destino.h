#ifndef DESTINO_H
#define DESTINO_H
#include <QString>


class Destino
{
private:
    int M;
    int N;
    QString valor;
public:
    Destino();
    Destino(int m, int n, QString valor);
    void clear ();

    //Setter
    void setM (int m);
    void setN (int n);
    void setValor(QString valor);

    //Getter
    int getM ();
    int getN ();
    QString getValor ();
};

#endif // DESTINO_H
