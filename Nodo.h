//
// Created by dantroll on 29/03/19.
//

#ifndef PROYECTO1_NODO_H
#define PROYECTO1_NODO_H


#include <iostream>

class Nodo {
private:
    int ID;
public:

    int fil;
    int col;
    std::string letra;
    Nodo *next;


    int getDato() const;

    void setLetra(std::string letra);

    Nodo *getNext() const;
    void setNext(Nodo *next);

    int getId() const;

    void setId(int id);

};

#endif //PROYECTO1_NODO_H
