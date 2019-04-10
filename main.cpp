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
    Lista *list = dic->generateList(paquete->getCambios());

    bool esverda = dic->compararString(dic->hacerString(list));

    std::cout << esverda << std::endl;




    //std::cout << ls->hacerString() << std::endl;
    return 0;
}
