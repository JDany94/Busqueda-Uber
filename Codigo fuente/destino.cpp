#include "destino.h"

Destino::Destino()
{
    M = 0;
    N = 0;
}
Destino::Destino(int m, int n, QString val)
{
    M = m;
    N = n;
    valor = val;
}

void Destino::clear()
{
    M=0;
    N=0;
}

// Setter
void Destino::setM(int m)
{
    M = m;
}
void Destino::setN(int n)
{
    N = n;
}
void Destino::setValor(QString val)
{
    valor = val;
}

// Getter
int Destino::getM()
{
  return M;
}
int Destino::getN()
{
    return N;
}
QString Destino::getValor()
{
    return valor;
}
