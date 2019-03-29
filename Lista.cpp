//
// Created by dantroll on 12/03/19.
//
/**
 * @authors Daniel Acuña Mora, Josue Mata
 */
#include "Lista.h"

/**
 * @brief Constructor de la clase Lista.
 */

Lista::Lista() {
    head = NULL;
    tail = NULL;
}


/**
 * @brief Funcion que agrega un nodo al inicio de la lista, recibe un numero entero que será el valor que se almacene
 * en el Nodo.
 * @param valor
 */
void Lista::addFirst(char *dato) {
    Nodo *node = new Nodo();
    node->setLetra(dato);
    node->next = this->head;
    this->head = node;
    //std::cout << "Se ha agregado el valor" << node->dato << " en la dirección de memoria: " << &node->dato << std::endl;
}

/**
 * @brief Funcion que agrega un nodo al final de la lista, recibe un numero entero que será el valor que se almacene
 * en el Nodo.
 * @param valor
 */
void Lista::addLast(char *dato){
    Nodo *temp = new Nodo;
    temp->letra = dato;
    temp->next = NULL;

    if (!head) { //
        head = temp;
        return;
    } else { // find last and link the new node
        Nodo *last = head;
        while (last->next) last = last->next;
        last->next = temp;
    }

}

/**
 * @brief Simple implementacion de una funcion que muestra los valores de cada nodo en la lista.
 */


bool Lista::compararString(std::string s1){
    std::cout << "Hello" <<std::endl;
    std::string s2("abcd");
    if (s1.compare(s2)==0){
        std::cout << "Es verdá son iguales" <<std::endl;
        return true;
    } else{
        std::cout << "No son iguales" <<std::endl;
        return false;
    }


}

std::string Lista::hacerString(){
    Nodo *temp;
    temp = head;
    std::string palabra("");
    while (temp != NULL) {
        palabra.append(temp->letra);

        temp = temp->next;
    }
    return palabra;
}
void Lista::vernodos() {
    Nodo *temp;
    temp = head;
    int i = 1;
    while (temp != NULL) {
        std::cout <<temp->letra << " "<< std::endl;
        temp = temp->next;
    }
}

/**
 * @brief Funcion que elimina el primer nodo de una lista.
 */

void Lista::delete_first() {

    Nodo *temp;
    if (head == NULL) {
        std::cout << "No hay elementos para eliminar." << std::endl;
    } else {
        temp = head;
        head = temp->next;
        delete (temp);
    }

}

/**
 * @brief Funcion que elimina el ultimo nodo de una lista.
 */
void Lista::delete_last() {
    Nodo *ptr, *prev;
    if (head == NULL)
        std::cout << "No hay elementos en la lista." << std::endl;
    else if (head->next == NULL) {
        ptr = head;
        head = NULL;
        delete (ptr);
        std::cout << "El ultimo elemento ha sido eliminado." << std::endl;
    } else {
        ptr = head;
        while (ptr->next != NULL) {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = NULL;
        delete (ptr);
    }

}
