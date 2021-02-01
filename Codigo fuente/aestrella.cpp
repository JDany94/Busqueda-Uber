#include "aestrella.h"
#include <cmath>
#include <ctime>
#include <ingrparm.h>
#include <windows.h>

aEstrella::aEstrella()
{

}

QVector<Casilla> aEstrella::aestrella(Entorno entorno, int heuristica)
{
    openSet.clear();
    closedSet.clear();
    camino.clear();
    bool terminado = false;
    Casilla origen, destino;
    QVector <Vecino> vecinos;
    vecinos = entorno.vecinos;

    //Destino
    destino.setM(entorno.getDestino().getM());
    destino.setN(entorno.getDestino().getN());
    destino.setValor(entorno.getDestino().getValor());
    //Origen
    origen.setM(entorno.getOrigen().getM());
    origen.setN(entorno.getOrigen().getN());
    origen.setValor(entorno.getOrigen().getValor());
    origen.setG(0);
    if (heuristica == MANHATTAN)
        origen.setH(heuristicaManhattan(origen,destino));
    if (heuristica == EUCLIDIANA)
        origen.setH(heuristicaEuclidiana(origen,destino));
    origen.setF(origen.getG() + origen.getH());
    openSet.push_back(origen);

    while (!terminado){
        if (openSet.size() > 0){ //mientras quede algo en openSet
            int ganador = 0;
            for (int i = 0; i < openSet.size(); i++){ //evaluamos que openset tiene menor coste
                if (openSet[i].getF() < openSet[ganador].getF()){
                    ganador = i;
                }
            }

            Casilla actual = openSet[ganador]; //se analiza la casilla ganadora

            if (actual.getM() == entorno.getDestino().getM() && actual.getN() == entorno.getDestino().getN()){ //evaluamos si llegamos al final
                terminado = true;
                Casilla temporal = actual;
                closedSet.push_back(actual);
                temporal.setNodosExpandidos(closedSet);

                while(distintoAOrigen(temporal,origen)){
                    camino.push_back(temporal);
                    temporal = buscarPadre(closedSet,temporal);
                }
                camino.push_back(origen);

            }
            else { // si no hemos llegado al final
                if (elementoEnOpenSet(actual.getM(),actual.getN())){
                    borrarDeOpenSet(actual);
                }
                closedSet.push_back(actual);

                //buscamos los vecinos del ganador
                for (int i = 0; i < vecinos.size(); i++){
                    if (vecinos[i].getActual().getM() == actual.getM() && vecinos[i].getActual().getN() == actual.getN()){
                        //derecho
                        if (!elementoEnClosedSet(vecinos[i].getVecinDer().getM(), vecinos[i].getVecinDer().getN()) && (vecinos[i].getVecinDer().getValor() == NADA || vecinos[i].getVecinDer().getValor() == DESTINO)){ //si no esta en closedSet y no es una pared
                            int tempG = actual.getG() + 1;
                            Casilla vecinNewD;
                            vecinNewD.setM(vecinos[i].getVecinDer().getM());
                            vecinNewD.setN(vecinos[i].getVecinDer().getN());
                            vecinNewD.setG(tempG);
                            if (heuristica == MANHATTAN)
                                vecinNewD.setH(heuristicaManhattan(vecinos[i].getVecinDer(),destino));
                            if (heuristica == EUCLIDIANA)
                                vecinNewD.setH(heuristicaEuclidiana(vecinos[i].getVecinDer(),destino));
                            vecinNewD.setF(vecinNewD.getG() + vecinNewD.getH());
                            vecinNewD.setValor(vecinos[i].getVecinDer().getValor());
                            Origen padre;
                            padre.setM(actual.getM());
                            padre.setN(actual.getN());
                            padre.setG(actual.getG());
                            if (heuristica == MANHATTAN)
                                padre.setH(heuristicaManhattan(actual,destino));
                            if (heuristica == EUCLIDIANA)
                                padre.setH(heuristicaEuclidiana(actual,destino));
                            padre.setF(padre.getG() + padre.getH());
                            padre.setValor(actual.getValor());
                            vecinNewD.setPadre(padre);

                            //si esta en openSet y su peso es mayor
                            if (elementoEnOpenSet(vecinos[i].getVecinDer().getM(), vecinos[i].getVecinDer().getN())){
                                if (tempG < vecinos[i].getVecinDer().getG()){
                                    vecinos[i].setVecinDer(vecinNewD);
                                }
                            }
                            else {
                                vecinos[i].setVecinDer(vecinNewD);
                                openSet.push_back(vecinos[i].getVecinDer());
                            }
                        }
                        //izquierdo
                        if (!elementoEnClosedSet(vecinos[i].getVecinIzq().getM(), vecinos[i].getVecinIzq().getN()) && (vecinos[i].getVecinIzq().getValor() == NADA || vecinos[i].getVecinIzq().getValor() == DESTINO)){ //si no esta en closedSet y no es una pared
                            int tempG = actual.getG() + 1;
                            Casilla vecinNewI;
                            vecinNewI.setM(vecinos[i].getVecinIzq().getM());
                            vecinNewI.setN(vecinos[i].getVecinIzq().getN());
                            vecinNewI.setG(tempG);
                            if (heuristica == MANHATTAN)
                                vecinNewI.setH(heuristicaManhattan(vecinos[i].getVecinIzq(),destino));
                            if (heuristica == EUCLIDIANA)
                                vecinNewI.setH(heuristicaEuclidiana(vecinos[i].getVecinIzq(),destino));
                            vecinNewI.setF(vecinNewI.getG() + vecinNewI.getH());
                            vecinNewI.setValor(vecinos[i].getVecinIzq().getValor());
                            Origen padre;
                            padre.setM(actual.getM());
                            padre.setN(actual.getN());
                            padre.setG(actual.getG());
                            if (heuristica == MANHATTAN)
                                padre.setH(heuristicaManhattan(actual,destino));
                            if (heuristica == EUCLIDIANA)
                                padre.setH(heuristicaEuclidiana(actual,destino));
                            padre.setF(padre.getG() + padre.getH());
                            padre.setValor(actual.getValor());
                            vecinNewI.setPadre(padre);

                            //si esta en openSet y su peso es mayor
                            if (elementoEnOpenSet(vecinos[i].getVecinIzq().getM(), vecinos[i].getVecinIzq().getN())){
                                if (tempG < vecinos[i].getVecinIzq().getG()){
                                    vecinos[i].setVecinIzq(vecinNewI);
                                }
                            }
                            else {
                                vecinos[i].setVecinIzq(vecinNewI);
                                openSet.push_back(vecinos[i].getVecinIzq());
                            }
                        }
                        //arriba
                        if (!elementoEnClosedSet(vecinos[i].getVecinArr().getM(), vecinos[i].getVecinArr().getN()) && (vecinos[i].getVecinArr().getValor() == NADA || vecinos[i].getVecinArr().getValor() == DESTINO)){ //si no esta en closedSet y no es una pared
                            int tempG = actual.getG() + 1;
                            Casilla vecinNewAR;
                            vecinNewAR.setM(vecinos[i].getVecinArr().getM());
                            vecinNewAR.setN(vecinos[i].getVecinArr().getN());
                            vecinNewAR.setG(tempG);
                            if (heuristica == MANHATTAN)
                                vecinNewAR.setH(heuristicaManhattan(vecinos[i].getVecinArr(),destino));
                            if (heuristica == EUCLIDIANA)
                                vecinNewAR.setH(heuristicaEuclidiana(vecinos[i].getVecinArr(),destino));
                            vecinNewAR.setF(vecinNewAR.getG() + vecinNewAR.getH());
                            vecinNewAR.setValor(vecinos[i].getVecinArr().getValor());
                            Origen padre;
                            padre.setM(actual.getM());
                            padre.setN(actual.getN());
                            padre.setG(actual.getG());
                            if (heuristica == MANHATTAN)
                                padre.setH(heuristicaManhattan(actual,destino));
                            if (heuristica == EUCLIDIANA)
                                padre.setH(heuristicaEuclidiana(actual,destino));
                            padre.setF(padre.getG() + padre.getH());
                            padre.setValor(actual.getValor());
                            vecinNewAR.setPadre(padre);

                            //si esta en openSet y su peso es mayor
                            if (elementoEnOpenSet(vecinos[i].getVecinArr().getM(), vecinos[i].getVecinArr().getN())){
                                if (tempG < vecinos[i].getVecinArr().getG()){
                                    vecinos[i].setVecinArr(vecinNewAR);
                                }
                            }
                            else {
                                vecinos[i].setVecinArr(vecinNewAR);
                                openSet.push_back(vecinos[i].getVecinArr());
                            }
                        }
                        //abajo
                        if (!elementoEnClosedSet(vecinos[i].getVecinAba().getM(), vecinos[i].getVecinAba().getN()) && (vecinos[i].getVecinAba().getValor() == NADA || vecinos[i].getVecinAba().getValor() == DESTINO)){ //si no esta en closedSet y no es una pared
                            int tempG = actual.getG() + 1;
                            Casilla vecinNewAB;
                            vecinNewAB.setM(vecinos[i].getVecinAba().getM());
                            vecinNewAB.setN(vecinos[i].getVecinAba().getN());
                            vecinNewAB.setG(tempG);
                            if (heuristica == MANHATTAN)
                                vecinNewAB.setH(heuristicaManhattan(vecinos[i].getVecinAba(),destino));
                            if (heuristica == EUCLIDIANA)
                                vecinNewAB.setH(heuristicaEuclidiana(vecinos[i].getVecinAba(),destino));
                            vecinNewAB.setF(vecinNewAB.getG() + vecinNewAB.getH());
                            vecinNewAB.setValor(vecinos[i].getVecinAba().getValor());
                            Origen padre;
                            padre.setM(actual.getM());
                            padre.setN(actual.getN());
                            padre.setG(actual.getG());
                            if (heuristica == MANHATTAN)
                                padre.setH(heuristicaManhattan(actual,destino));
                            if (heuristica == EUCLIDIANA)
                                padre.setH(heuristicaEuclidiana(actual,destino));
                            padre.setF(padre.getG() + padre.getH());
                            padre.setValor(actual.getValor());
                            vecinNewAB.setPadre(padre);

                            //si esta en openSet y su peso es mayor
                            if (elementoEnOpenSet(vecinos[i].getVecinAba().getM(), vecinos[i].getVecinAba().getN())){
                                if (tempG < vecinos[i].getVecinAba().getG()){
                                    vecinos[i].setVecinAba(vecinNewAB);
                                }
                            }
                            else {
                                vecinos[i].setVecinAba(vecinNewAB);
                                openSet.push_back(vecinos[i].getVecinAba());
                            }
                        }
                    }
                }
            }
        }
        else {
            terminado = true;
            camino.clear();
        }
    }
    return camino;
}

int aEstrella::heuristicaManhattan(Casilla origen, Casilla destino)
{
    int x,y;

    x = abs(origen.getM() - destino.getM());
    y = abs(origen.getN() - destino.getN());

    return x+y;
}

float aEstrella::heuristicaEuclidiana(Casilla origen, Casilla destino)
{
    int x,y;

    x = abs(origen.getM() - destino.getM());
    y = abs(origen.getN() - destino.getN());
    x = pow(x,2);
    y = pow(y,2);

    return sqrtf(x+y);
}

void aEstrella::borrarDeOpenSet(Casilla elemento)
{
    for (int i = 0; i < openSet.size(); i++) {
        if (elemento.getM() == openSet[i].getM() && elemento.getN() == openSet[i].getN())
            openSet.erase(openSet.begin() + i);
    }
}

bool aEstrella::elementoEnClosedSet(int M, int N)
{
    for (int i = 0; i < closedSet.size(); i++) {
        if (M == closedSet[i].getM() && N == closedSet[i].getN()){
            return true;
        }
    }
    return false;
}

bool aEstrella::elementoEnOpenSet(int M, int N)
{
    for (int i = 0; i < openSet.size(); i++) {
        if (M == openSet[i].getM() && N == openSet[i].getN()){
            return true;
        }
    }
    return false;
}

bool aEstrella::distintoAOrigen(Casilla temp, Casilla ori)
{
    if (temp.getM() == ori.getM() && temp.getN() == ori.getN()){
        return false;
    }
    else{
        return true;
    }
}

Casilla aEstrella::buscarPadre(QVector<Casilla> vecinos, Casilla temp)
{
    for (int i = 0; i < vecinos.size(); i++) {
        if (vecinos[i].getM() == temp.getM() && vecinos[i].getN() == temp.getN()){
            Casilla ret;
            ret.setM(vecinos[i].getPadre().getM());
            ret.setN(vecinos[i].getPadre().getN());
            ret.setF(vecinos[i].getPadre().getF());
            ret.setG(vecinos[i].getPadre().getG());
            ret.setH(vecinos[i].getPadre().getH());
            ret.setValor(vecinos[i].getPadre().getValor());
            return ret;
        }
    }
    return temp;
}
