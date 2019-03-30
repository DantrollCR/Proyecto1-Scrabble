#include <iostream>
#include "Lista.h"
#include "Diccionario.h"

int main() {
    Lista *ls = new Lista();
    Diccionario *dic = new Diccionario();

    //ls->addFirst("Daniel");

    ls->addLast("v");//agrega nodos a la lista
    ls->addLast("e");
    ls->addLast("r");

    //ls->vernodos();
    dic->compararString(dic->hacerString(*ls));


    //std::cout << ls->hacerString() << std::endl;
    return 0;
}