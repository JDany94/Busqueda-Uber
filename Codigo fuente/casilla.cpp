#include "casilla.h"

Casilla::Casilla()
{
    M = 0;
    N = 0;
    F = 0;
    G = 0;
    H = 0;
}
Casilla::Casilla(int m, int n, QString val)
{
    M = m;
    N = n;
    valor = val;
}

// Setter
void Casilla::setM(int m)
{
    M = m;
}
void Casilla::setN(int n)
{
    N = n;
}
void Casilla::setValor(QString val)
{
    valor = val;
}
void Casilla::setPadre(Origen pad)
{
    padre = pad;
}
void Casilla::setF(float f)
{
    F = f;
}
void Casilla::setG(int g)
{
    G = g;
}
void Casilla::setH(float h)
{
    H = h;
}
void Casilla::setNodosExpandidos(const QVector<Casilla> &value)
{
    nodosExpandidos = value;
}

// Getter
int Casilla::getM()
{
  return M;
}
int Casilla::getN()
{
    return N;
}
QString Casilla::getValor()
{
    return valor;
}
Origen Casilla::getPadre()
{
    return padre;
}
float Casilla::getF()
{
    return F;
}
int Casilla::getG()
{
    return G;
}
float Casilla::getH()
{
    return H;
}
QVector<Casilla> Casilla::getNodosExpandidos()
{
    return nodosExpandidos;
}
