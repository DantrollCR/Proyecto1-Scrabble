//
// Created by dantroll on 08/04/19.
//

#include "Server.h"
#include "json.hpp"
#include "Empaquetar.h"
#include "Diccionario.h"

using json = nlohmann::json;

Empaquetar *package;
Diccionario *dic = new Diccionario();

/**
 * Recibe un string, con formato de Json, y se encarga de convertilo en un objeto Json para
 * trabajar con el a lo largo de la vida util del objeto Server.
 * @param StringJson
 * @return
 */
json Server::hacerJsonString(std::string StringJson) {
    json j1;
    j1 = json::parse(StringJson);
    std::cout << j1.dump(2) << std::endl;
    return j1;


}

/**
 * La funcion desempaquetar recibe un Json, ya sea por que está en disco o que
 * se obtuvo de un string usando "hacerJsonString()". Dentro de la misma funcion se edita un Objeto Empaquetar
 * el cual estará inciado en conjunto a Server, para un manejo más facil de las cosas.
 * @param j1
 * @return
 */

Empaquetar *Server::desempaquetar(json j1) {
    Empaquetar *paquete = new Empaquetar();
    json lista = j1["JSON"];
    int idGam = j1["IDGAME"];
    int idPlay = j1["IDPLAYER"];
    bool crearJuego = j1["CREATE"];
    bool refresh = j1["REFRESH"];
    bool refreshed = j1["REFRESHED"];
    paquete->setIDjuego(idGam);
    paquete->setIDJugador(idPlay);
    paquete->setCrearJuego(crearJuego);
    paquete->setActualizarJuego(refresh);
    paquete->setActualizado(refreshed);
    paquete->setCambios(lista);
    paquete->setListaCambios(dic->generateList(lista));
    package = paquete;
    return paquete;
}

/**
 * Este es el metodo que se va a encargar de comprobar los datos contenidos en Empaquetar, para
 * así hacer las comparaciónes y vreficar de maner correcta los atributos, para asì ya sea crear un juego, enviar
 * instrucciones a los demás clientes etc...
 * @param j1
 */
void Server::comprobarDatos(json j1) {
    if (package->getCrearJuego() == true) {
        //Juego paquete = package;
        //ListaJuego add(paquete)

        std::cout << "Voy a crear un juego" << std::endl;
    } else {
        /*for (int i = 0; i < ; ++i) {
            pseudocodigo que no entiendo...
        }*/
        std::cout << "Ya hay un juego, voy a darle la info de este juego" << std::endl;
    }
}