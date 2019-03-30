//
// Created by josue on 29/03/19.
//

#ifndef PROYECTO1_DICCIONARIO_H
#define PROYECTO1_DICCIONARIO_H


#include <string>
#include <iostream>
#include "Lista.h"

class Diccionario {

private:

    //aqui va el diccionario
    //sugiero un archivo de texto

public:

    Diccionario(); //constructor

    std::string hacerString(Lista lista);

    bool compararString(std::string s1);
    int calcularPuntaje(Lista Lista);

};


#endif //PROYECTO1_DICCIONARIO_H
