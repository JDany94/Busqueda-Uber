#ifndef VECINO_H
#define VECINO_H
#include <casilla.h>


class Vecino
{
private:
    Casilla actual;
    Casilla vecinDer;
    Casilla vecinIzq;
    Casilla vecinArr;
    Casilla vecinAba;
public:
    Vecino();

    //Setter
    void setActual (Casilla casilla);
    void setVecinDer (Casilla casilla);
    void setVecinIzq (Casilla casilla);
    void setVecinArr (Casilla casilla);
    void setVecinAba (Casilla casilla);

    //Getter
    Casilla getActual ();
    Casilla getVecinDer ();
    Casilla getVecinIzq ();
    Casilla getVecinArr ();
    Casilla getVecinAba ();
};

#endif // VECINO_H
