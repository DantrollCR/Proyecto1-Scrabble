//
// Created by josue on 29/03/19.
//

#include "Diccionario.h"
#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <fstream>
#include "json.hpp"

char *five_pts[] = {"V", "E", "R"};

using json = nlohmann::json;


Diccionario::Diccionario() {}

std::string Diccionario::hacerString(Lista *lista) { //esta funcion va dentro del cliente
    Nodo *temp;
    temp = lista->getHead();
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

    for (int j = 1; j <= s; ++j) {
        std::string sq = std::to_string(j);
        temp->addLetra(j1[sq]["Letra"]);
    }
    return temp;
}

/**
 * La funcion recibe un string, generado convirtiendo una lista en un String,
 * este stiring será comparado con todos las palabars contenidas en el Archivo Json
 * Diccionario.json, si no se encuentra la palabra se procede a contactar al "experto"
 * para validar la palabra.
 *
 * @param s1
 * @return
 */

bool Diccionario::compararString(std::string s1){ //aqui se revisa el diccionario
    std::cout << "Comparando palabra" << std::endl;
    int size_of = 0;

    std::ifstream i("dicc.json");
    json j;
    i >> j;

    size_of = 0;
    char llave[] = {s1[0]};

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    std::cout << s1 << std::endl;
    while (size_of <= j[llave].size()) {
        if (j[llave][size_of].is_null()) {
            break;
        } else if (s1.compare(j[llave][size_of]) == 0) {
            std::cout << "La  palabra: " << s1 << ", es igual a: " << j[llave][size_of] << ", llave en json: "
                      << size_of << std::endl;
            return true;
        } else {
            size_of++;
        }

    }
    std::cout << "Palabra no enconrtrada en Diccionario, puede preguntar al experto" << std::endl;
    return false;

}

/**
 * El sistema de puntaje aun no esta elaborado por completo, sin embargo esta funcion
 * hace lo que se necesita. Solo se deben hacer las funciones para los demás puntajes.
 * @param s1
 * @param ptrPun
 */

void cuatroPts(std::string s1, int &ptrPun) {
    for (int i = 0; i < 3; ++i) {

        if (s1.compare(std::string(five_pts[i])) == 0) {
            std::cout << s1 << " Es igual a: " << std::string(five_pts[i]) << ", Entonces sumo 4" << std::endl;

            ptrPun += 4;

        } else {
            ptrPun += 0;
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
