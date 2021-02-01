#include "vecino.h"

Vecino::Vecino()
{

}

//Setter

void Vecino::setActual(Casilla casilla)
{
    actual = casilla;
}

void Vecino::setVecinDer(Casilla casilla)
{
    vecinDer = casilla;
}

void Vecino::setVecinIzq(Casilla casilla)
{
    vecinIzq = casilla;
}

void Vecino::setVecinArr(Casilla casilla)
{
    vecinArr = casilla;
}

void Vecino::setVecinAba(Casilla casilla)
{
    vecinAba = casilla;
}

//Getter

Casilla Vecino::getActual()
{
    return actual;
}

Casilla Vecino::getVecinDer()
{
    return vecinDer;
}

Casilla Vecino::getVecinIzq()
{
    return vecinIzq;
}

Casilla Vecino::getVecinArr()
{
    return vecinArr;
}

Casilla Vecino::getVecinAba()
{
    return vecinAba;
}
