#include <iostream>
#include "Lista.h"

int main() {
    Lista *ls = new Lista();

    ls->addFirst("Daniel");
    ls->addLast("b");
    ls->addLast("c");
    ls->addLast("d");

    ls->vernodos();
    ls->compararString(ls->hacerString());


    std::cout << ls->hacerString() << std::endl;
    return 0;
}