#ifndef AESTRELLA_H
#define AESTRELLA_H
#include <QVector>
#include <casilla.h>
#include <entorno.h>

class aEstrella
{
private:
    QVector <Casilla> openSet;
    QVector <Casilla> closedSet;
    QVector <Casilla> camino;
public:
    aEstrella();

    QVector <Casilla> aestrella(Entorno entorno, int heuristica);



    int heuristicaManhattan (Casilla origen, Casilla destino);

    float heuristicaEuclidiana (Casilla origen, Casilla destino);

    void borrarDeOpenSet (Casilla casilla);

    bool elementoEnClosedSet (int M, int N);

    bool elementoEnOpenSet(int M, int N);

    bool distintoAOrigen(Casilla temp, Casilla ori);

    Casilla buscarPadre (QVector <Casilla> vecinos, Casilla temp);
};

#endif // AESTRELLA_H
