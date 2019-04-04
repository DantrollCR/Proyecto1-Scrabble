#include <iostream>
#include <cstring>
#include "Lista.h"
#include "Diccionario.h"

int main() {
    Lista *ls = new Lista(); //la lista es recibida mediante el socket
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



    //ls->vernodos();
    dic->compararString(dic->hacerString(*ls));
    dic->calcularPuntaje(*ls);




    //std::cout << ls->hacerString() << std::endl;
    return 0;
}