#include "obstaculo.h"

Obstaculo::Obstaculo()
{
    M = 0;
    N = 0;
}
Obstaculo::Obstaculo(int m, int n)
{
    M = m;
    N = n;
}

// Setter
void Obstaculo::setM(int m) {
    M = m;
}
void Obstaculo::setN(int n) {
    N = n;
}

// Getter
int Obstaculo::getM(){
  return M;
}

int Obstaculo::getN(){
  return N;
}
