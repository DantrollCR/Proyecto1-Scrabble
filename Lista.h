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

public:


    Lista(); //constructor

    void delete_last();

    void delete_first();

    void addFirst(char *valor);

    void addLast(std::string valor);

    void addCollectorEnd(int *address);

    void vernodos();

    void vernodosGC();


    void printCollector();

    void deleteCollectorFirst();

    Nodo *getHead() const;

    void setHead(Nodo *head);


//
//    void deleteCollectorEnd();

};


#endif //PROYECTO1_LISTA_H
