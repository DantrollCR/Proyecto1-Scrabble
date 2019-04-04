#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
#include "Lista.h"
#include "Diccionario.h"
#include "json.hpp"

using json = nlohmann::json;

int main() {
    Lista *ls = new Lista();
    Lista *l2 = new Lista();//la lista es recibida mediante el socket
    //Lista *ls = listarecibida del socket
    Diccionario *dic = new Diccionario();

    //ls->addFirst("Daniel");

    ls->addLast("V");//agrega nodos a la lista
    ls->addLast("E");
    ls->addLast("O");
    ls->addLast("O");
    ls->addLast("O");
    ls->addLast("O");
    ls->addLast("O");
    ls->addLast("O");


    json j;
    j["0"] = 1;
    j["1"] = "H";


    std::ofstream s("pretty.json");
    s << std::setw(4) << j << std::endl;


    ls->addLast(j["1"]);

    l2 = dic->generateList(dic->generateJson(*ls));
    l2->addLast("D");
    l2->vernodos();
    //ls->vernodos();
    dic->compararString(dic->hacerString(*ls));
    dic->calcularPuntaje(*ls);





    //std::cout << ls->hacerString() << std::endl;
    return 0;
}