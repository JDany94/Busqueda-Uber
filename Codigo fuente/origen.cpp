#include "origen.h"


Origen::Origen()
{
    M = 0;
    N = 0;
}
Origen::Origen(int m, int n, QString val)
{
    M = m;
    N = n;
    valor = val;
}

void Origen::clear(){
    M=0;
    N=0;
    valor = "";
}

// Setter
void Origen::setM(int m) {
    M = m;
}
void Origen::setN(int n) {
    N = n;
}

void Origen::setValor(QString val)
{
    valor = val;
}

void Origen::setF(float f)
{
    F = f;
}

void Origen::setG(int g)
{
    G = g;
}

void Origen::setH(float h)
{
    H = h;
}

// Getter
int Origen::getM(){
  return M;
}

int Origen::getN(){
    return N;
}

QString Origen::getValor()
{
    return valor;
}

float Origen::getF()
{
    return F;
}

int Origen::getG()
{
    return G;
}

float Origen::getH()
{
    return H;
}
