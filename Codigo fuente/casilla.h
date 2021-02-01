#ifndef CASILLA_H
#define CASILLA_H
#include <QString>
#include <QVector>
#include <origen.h>

const QString ORIGEN = "🚗";
const QString DESTINO = "🏁";
const QString NADA = "⚪";
const QString OBSTACULO = "⚫";
const QString CAMINO = "🔴";
const QString NODOSEXPAND = "🔵";

class Casilla
{
private:

   int M;
   int N;
   QString valor;
   Origen padre;
   float F;
   int G;
   float H;
   QVector <Casilla> nodosExpandidos;

public:

    Casilla();
    Casilla(int m, int n, QString valor);

    //Setter
    void setM (int m);
    void setN (int n);
    void setValor (QString valor);
    void setPadre (Origen padre);
    void setF (float F);
    void setG (int G);
    void setH (float H);
    void setNodosExpandidos(const QVector<Casilla> &value);

    //Getter
    int getM ();
    int getN ();
    QString getValor ();
    Origen getPadre ();
    float getF ();
    int getG ();
    float getH ();
    QVector<Casilla> getNodosExpandidos();
};

#endif // CASILLA_H
