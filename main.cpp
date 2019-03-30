#include <iostream>
#include "Lista.h"
#include "Diccionario.h"

int main() {
    Lista *ls = new Lista();
    Diccionario *dic = new Diccionario();

    //ls->addFirst("Daniel");

    ls->addLast("a");//agrega nodos a la lista
    ls->addLast("b");
    ls->addLast("c");

    //ls->vernodos();
    dic->compararString(dic->hacerString(*ls));
    dic->calcularPuntaje(*ls);



    //std::cout << ls->hacerString() << std::endl;
    return 0;
}