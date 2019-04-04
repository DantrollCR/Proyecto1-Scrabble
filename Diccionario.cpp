//
// Created by josue on 29/03/19.
//

#include "Diccionario.h"
#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
#include "json.hpp"

char *five_pts[] = {"V", "E", "R"};
int size_six = 4;

using json = nlohmann::json;


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

void Diccionario::generateJson(Lista lista) {
    json j1;
    Nodo *temp;
    temp = lista.getHead();
    int i = 0;
    while (temp != NULL) {
        std::string s = std::to_string(i);
        std::string s1(temp->letra);
        j1[s] = temp->letra;
        temp = temp->next;
        i++;
    }
    std::cout << j1.dump(2) << std::endl;
}

void Diccionario::generateList(json j1) {
    int i = 0;
    std::string s = std::to_string(i);
    while (j1[s] != false) {
        std::cout << j1[s] << std::endl;
    }

}
bool Diccionario::compararString(std::string s1){ //aqui se revisa el diccionario
    std::cout << "Comparando palabra" <<std::endl;
    std::string s2("VER");
    if (s1.compare(s2)==0){
        std::cout << "Eh verdá son igualeh" <<std::endl;
        return true;
    } else{
        std::cout << "No son iguales" <<std::endl;
        return false;
    }

}


void cuatroPts(std::string s1, int &ptrPun) {
    for (int i = 0; i < 3; ++i) {

        if (s1.compare(std::string(five_pts[i])) == 0) {
            std::cout << s1 << " Es igual a: " << std::string(five_pts[i]) << ", Entonces sumo 4" << std::endl;

            ptrPun += 4;

        }
    }


}

int Diccionario::calcularPuntaje(Lista lista) {
    int puntaje = 0;
    int &puntR = puntaje;
    Nodo *temp;
    int i = 0;

    temp = lista.getHead();
    while (temp != NULL) {
        std::string s1(temp->letra);
        cuatroPts(s1, puntR);
        temp = temp->next;
    }
    std::cout << puntR << std::endl;
}
