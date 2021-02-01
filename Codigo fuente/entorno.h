#ifndef ENTORNO_H
#define ENTORNO_H

#include <QVector>
#include <origen.h>
#include <destino.h>
#include <obstaculo.h>
#include <vecino.h>
#include <casilla.h>

const int LIMITE = 200;
const int MANHATTAN = 1;
const int EUCLIDIANA = 2;

class Entorno {

private:

   int M;
   int N;
   Origen origen;
   Destino destino;

public:

   QVector <Obstaculo> obstaculos;
   QVector <Vecino> vecinos;
   QString Mapa[LIMITE][LIMITE];
   QVector <Casilla> casillas;

   Entorno();
   Entorno(int m, int n);

   //Setter
   void setM (int m);
   void setN (int n);
   void setOrigen (Origen ori);
   void setDestino (Destino dest);
   void setObstaculo (Obstaculo obst);
   void setCasillas();
   void setMapa (int porcent);
   void setVecinos ();

   //Getter
   int getM ();
   int getN ();
   Origen getOrigen ();
   Destino getDestino ();
   int getNumObst();
   QVector <Obstaculo> getObstaculos ();
   QVector <Casilla> getCasillas();
   QVector <Vecino> getVecinos ();

   //Util
   void removeObstaculo(Obstaculo obst);
   bool obstExiste (Obstaculo obst);
   void clearEntorno ();
   QString valorCasilla (Casilla casilla);
};

#endif // ENTORNO_H
