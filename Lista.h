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

    bool compararString(std::string s1);

    std::string hacerString();

    void addFirst(char *valor);

    void addLast(char *valor);

    void addCollectorEnd(int *address);

    void vernodos();

    void vernodosGC();


    void printCollector();

    void deleteCollectorFirst();
//
//    void deleteCollectorEnd();

};


#endif //PROYECTO1_LISTA_H
