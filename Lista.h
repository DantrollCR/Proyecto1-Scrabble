//
// Created by dantroll on 29/03/19.
//

#ifndef PROYECTO1_LISTA_H
#define PROYECTO1_LISTA_H



#include <iostream>
#include "Nodo.h"

class Lista {
private:
    Nodo *head, *tail;
    int Id;

public:

    int size;

    Lista(); //constructor


    void addLetra(std::string letra, int fila, int col);

    void addLetra(std::string letra);

    void clear();
    void vernodos();
    Nodo *getHead() const;

    void setHead(Nodo *head);

    int getId() const;

    void setId(int id);


//
//    void deleteCollectorEnd();

};


#endif //PROYECTO1_LISTA_H
