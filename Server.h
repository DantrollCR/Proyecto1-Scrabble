//
// Created by dantroll on 08/04/19.
//

#ifndef PROYECTO1__SERVER_H
#define PROYECTO1__SERVER_H

#include "iostream"
#include "json.hpp"
#include "Empaquetar.h"

using json = nlohmann::json;

class Server {
private:
    int *jugadores[4] = {0, 0, 0, 0};
    int *juegoid[];

public:
    void leerEmpaquetado();

    void comprobarDatos(json j);

    Empaquetar *desempaquetar(json j1);

    json hacerJsonString(std::string s1);


};


#endif //PROYECTO1__SERVER_H
