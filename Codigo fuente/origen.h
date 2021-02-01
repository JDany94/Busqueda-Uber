#ifndef ORIGEN_H
#define ORIGEN_H
#include <QString>


class Origen
{
private:
    int M;
    int N;
    QString valor;
    float F;
    int G;
    float H;
public:
    Origen();
    Origen(int m, int n, QString valor);

    void clear();

    //Setter
    void setM (int m);
    void setN (int n);
    void setValor (QString valor);
    void setF (float F);
    void setG (int G);
    void setH (float H);

    //Getter
    int getM ();
    int getN ();
    QString getValor ();
    float getF ();
    int getG ();
    float getH ();

};

#endif // ORIGEN_H
