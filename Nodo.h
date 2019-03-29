//
// Created by dantroll on 29/03/19.
//

#ifndef PROYECTO1_NODO_H
#define PROYECTO1_NODO_H


#include <iostream>

class Nodo {
public:

    char* letra ;
    Nodo *next;

    int getDato() const;
    void setLetra(char *dato);

    Nodo *getNext() const;
    void setNext(Nodo *next);

};


#endif //PROYECTO1_NODO_H
