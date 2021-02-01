#include "entorno.h"

Entorno::Entorno()
{
    M = 0;
    N = 0;
}
Entorno::Entorno(int m, int n)
{
    M = m;
    N = n;
}

// Setter
void Entorno::setM(int m)
{
    M = m;
}
void Entorno::setN(int n)
{
    N = n;
}
void Entorno::setOrigen(Origen ori)
{
    origen = ori;
}
void Entorno::setDestino(Destino dest)
{
    destino = dest;
}
void Entorno::setObstaculo(Obstaculo obst)
{
    obstaculos.push_back(obst);
    Mapa[obst.getM()][obst.getN()]=OBSTACULO;
}
void Entorno::setCasillas()
{
    Casilla casilla;
    for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                casilla.setM(i);
                casilla.setN(j);
                Obstaculo obst;
                obst.setM(i);
                obst.setN(j);
                if(obstExiste(obst)){
                    casilla.setValor(OBSTACULO);
                }
                else{
                    casilla.setValor(NADA);
                }
                casillas.push_back(casilla);
            }
        }
    for (int i = 0; i < casillas.size(); i++)
    {
        if (casillas[i].getM() == origen.getM() && casillas[i].getN() == origen.getN())
            casillas[i].setValor(ORIGEN);
        if (casillas[i].getM() == destino.getM() && casillas[i].getN() == destino.getN())
            casillas[i].setValor(DESTINO);
    }
}
void Entorno::setMapa(int porcent)
{
    int value = 10 * porcent / 100;

    for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if ((rand()%10+1) >= value+1){
                    Mapa[i][j]=NADA;
                }else{
                    Mapa[i][j]=OBSTACULO;
                   }
            }
        }
    Mapa[origen.getM()][origen.getN()] = ORIGEN;
    Mapa[destino.getM()][destino.getN()] = DESTINO;
    obstaculos.clear();
}
void Entorno::setVecinos()
{
    Vecino vecino;
    for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                Casilla casilla;
                casilla.setM(i);
                casilla.setN(j);

                casilla.setValor(valorCasilla(casilla));
                vecino.setActual(casilla);

                //vecino izquierdo
                casilla.setM(i-1);
                casilla.setN(j);

                casilla.setValor(valorCasilla(casilla));
                vecino.setVecinIzq(casilla);

                //vecino derecho
                casilla.setM(i+1);
                casilla.setN(j);

                casilla.setValor(valorCasilla(casilla));
                vecino.setVecinDer(casilla);

                //vecino de arriba
                casilla.setM(i);
                casilla.setN(j-1);

                casilla.setValor(valorCasilla(casilla));
                vecino.setVecinArr(casilla);

                //vecino de abajo
                casilla.setM(i);
                casilla.setN(j+1);

                casilla.setValor(valorCasilla(casilla));
                vecino.setVecinAba(casilla);

                vecinos.push_back(vecino);
            }
        }
}


// Getter
int Entorno::getM()
{
  return M;
}
int Entorno::getN()
{
  return N;
}
Origen Entorno::getOrigen()
{
    return origen;
}
Destino Entorno::getDestino()
{
    return destino;
}
QVector <Obstaculo> Entorno::getObstaculos()
{
    return obstaculos;
}
QVector<Casilla> Entorno::getCasillas()
{
    return casillas;
}
QVector<Vecino> Entorno::getVecinos()
{
    return vecinos;
}
int Entorno::getNumObst()
{
    return obstaculos.size();
}


bool Entorno::obstExiste(Obstaculo obst)
{
    if(Mapa[obst.getM()][obst.getN()] == OBSTACULO)
        return true;
    return false;
}
void Entorno::clearEntorno()
{
    M=0;
    N=0;
    obstaculos.clear();
    casillas.clear();
    vecinos.clear();
    origen.clear();
    destino.clear();
    for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                Mapa[i][j]="";
            }
        }
}
QString Entorno::valorCasilla(Casilla casill)
{
    for (int i = 0; i < casillas.size(); i++)
    {
        if (casillas[i].getM() == casill.getM() && casillas[i].getN() == casill.getN())
            return casillas[i].getValor();
    }
    return "";
}
void Entorno::removeObstaculo(Obstaculo obst)
{
    for (int i = 0; i < obstaculos.size(); i++) {
        if (obst.getM() == obstaculos[i].getM() && obst.getN() == obstaculos[i].getN())
            obstaculos.erase(obstaculos.begin() + i);
    }
    Mapa[obst.getM()][obst.getN()]=NADA;
}
