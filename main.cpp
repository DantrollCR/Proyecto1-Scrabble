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

    bool esverda = dic->compararString("ZANAHORIA");
    std::cout << esverda << std::endl;




    //std::cout << ls->hacerString() << std::endl;
    return 0;
}
