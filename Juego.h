//
// Created by dantroll on 10/04/19.
//

#ifndef PROYECTO1__JUEGO_H
#define PROYECTO1__JUEGO_H


#include "Lista.h"
#include "Empaquetar.h"

class Juego {
private:
    int IDJuego;
    Lista *clientes;
    Lista *cambios;
public:
    void actualizar(Empaquetar pq);


};


#endif //PROYECTO1__JUEGO_H
