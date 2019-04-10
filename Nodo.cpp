//
// Created by dantroll on 29/03/19.
//

#include "Nodo.h"

void Nodo::setLetra(std::string dato) {
    letra = dato;
}

int Nodo::getId() const {
    return ID;
}

void Nodo::setId(int id) {
    ID = id;
}
