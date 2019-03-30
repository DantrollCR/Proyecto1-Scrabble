//
// Created by josue on 29/03/19.
//

#include "Diccionario.h"

char* six_pts[4] = {"a","b","c","d"};
int size_six = 4;


Diccionario::Diccionario() {}

std::string Diccionario::hacerString(Lista lista){ //esta funcion va dentro del cliente
    Nodo *temp;
    temp = lista.getHead();
    std::string palabra("");
    while (temp != NULL) {
        palabra.append(temp->letra);

        temp = temp->next;
    }
    return palabra;
}

bool Diccionario::compararString(std::string s1){ //aqui se revisa el diccionario
    std::cout << "Comparando palabra" <<std::endl;
    std::string s2("ver");
    if (s1.compare(s2)==0){
        std::cout << "Eh verdá son igualeh" <<std::endl;
        return true;
    } else{
        std::cout << "No son iguales" <<std::endl;
        return false;
    }

}
int Diccionario::calcularPuntaje(Lista lista) {
    int puntaje=0;
    Nodo *temp;
    int i=0;
    temp = lista.getHead();
    while (temp != NULL) {
        if(temp->letra=six_pts[i]) {
                std::cout << "Sumé" <<std::endl;
                puntaje+=6;
        }
        temp = temp->next;
        i++;

    }
    std::cout << puntaje <<std::endl;
    return puntaje;
}

