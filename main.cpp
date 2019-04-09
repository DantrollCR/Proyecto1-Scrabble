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
    std::ifstream i("pretty.json");
    json j;
    i >> j;
    paquete = serv->desempaquetar(j);
    serv->comprobarDatos(j);

    std::cout << paquete->getCambios().dump(2) << std::endl;
    Lista *ls = new Lista();
    Lista *l2 = new Lista();//la lista es recibida mediante el socket
    //Lista *ls = listarecibida del socket
    Diccionario *dic = new Diccionario();

    //ls->addFirst("Daniel");

    ls->addLetra("A");//agrega nodos a la lista
    ls->addLetra("V");
    ls->addLetra("I");
    ls->addLetra("O");
    ls->addLetra("N");

    /*
        std::ifstream i("file.json");
        json j;
        i >> j;
     */

    l2 = dic->generateList(dic->generateJson(*ls));
    l2->addLetra("D");
    l2->vernodos();
    //ls->vernodos();
    dic->compararString(dic->hacerString(*ls));
    dic->calcularPuntaje(*ls);





    //std::cout << ls->hacerString() << std::endl;
    return 0;
}
