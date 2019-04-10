#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
#include "Lista.h"
#include "Diccionario.h"
#include "json.hpp"
#include "Empaquetar.h"
#include "Server.h"

using json = nlohmann::json;

int main() {
    Server *serv = new Server();
    Empaquetar *paquete = new Empaquetar();
    Diccionario *dic = new Diccionario();
    std::ifstream i("pretty.json");
    json j;
    i >> j;
    json j2 = serv->hacerJsonString(j.dump());
    paquete = serv->desempaquetar(j2);
    int puntaje = dic->calcularPuntaje(paquete->getListaCambios());


    std::cout << puntaje << std::endl;




    //std::cout << ls->hacerString() << std::endl;
    return 0;
}
