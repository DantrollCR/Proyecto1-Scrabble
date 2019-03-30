#include <iostream>
#include "Lista.h"

int main() {
    Lista *ls = new Lista();

    //ls->addFirst("Daniel");

    ls->addLast("v");//agrega nodos a la lista
    ls->addLast("e");
    ls->addLast("r");

    //ls->vernodos();
    ls->compararString(ls->hacerString());


    //std::cout << ls->hacerString() << std::endl;
    return 0;
}