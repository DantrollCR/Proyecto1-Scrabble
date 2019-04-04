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

json Diccionario::generateJson(Lista lista) {
    json j1;
    Nodo *temp;
    temp = lista.getHead();
    int i = 1;
    j1["0"] = lista.size;

    while (temp != NULL) {
        std::string s = std::to_string(i);
        std::string s1(temp->letra);
        j1[s] = {{"Letra", temp->letra},
                 {"Posi",  {1, 2}}};
        temp = temp->next;
        i++;
    }
    std::cout << j1.dump(2) << std::endl;
    return j1;
}

Lista *Diccionario::generateList(json j1) {
    Lista *temp = new Lista(); //la lista es recibida mediante el socket
    int s = j1["0"];

    for (int j = 1; j <= s + 1; ++j) {
        std::string s = std::to_string(j);
        temp->addLast(j1[s]["Letra"]);
    }
    std::cout << "-----------------Lista Generada---------------" << std::endl;
    return temp;
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
