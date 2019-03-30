//
// Created by josue on 29/03/19.
//

#include "Diccionario.h"

Diccionario::Diccionario() {}

std::string Diccionario::hacerString(Lista lista){ //esta funcion va dentro del diccionario
    Nodo *temp;
    temp = lista.getHead();
    std::string palabra("");
    while (temp != NULL) {
        palabra.append(temp->letra);

        temp = temp->next;
    }
    return palabra;
}

bool Diccionario::compararString(std::string s1){
    std::cout << "Comparando palabra" <<std::endl;
    std::string s2("ver");
    if (s1.compare(s2)==0){
        std::cout << "Es verdá son iguales" <<std::endl;
        return true;
    } else{
        std::cout << "No son iguales" <<std::endl;
        return false;
    }


}
