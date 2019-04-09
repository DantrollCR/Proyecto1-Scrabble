//
// Created by dantroll on 08/04/19.
//

#ifndef PROYECTO1__EMPAQUETAR_H
#define PROYECTO1__EMPAQUETAR_H

#include "json.hpp"
#include "Lista.h"

using json = nlohmann::json;

class Empaquetar {
public:
    Empaquetar(int IDJugador, int IDjuego, bool CrearJuego, bool ActualizarJuego, bool Actualizado,
               Lista *listaCambios);

    Empaquetar();

    int getIDJugador() const;

    void setIDJugador(int idjugador);

    int getIDjuego() const;

    void setIDjuego(int idjuego);

    bool getCrearJuego();

    void setCrearJuego(bool crearJuego);

    bool getActualizarJuego();

    void setActualizarJuego(bool actualizarJuego);

    bool getActualizado();

    void setActualizado(bool actualizado);

    json generarJsonEmpaquetado();

    json getCambios();

    void setCambios(json Cambios);

    json generarJson();


private:
    int IDJugador;
    int IDjuego;
    bool CrearJuego;
    bool ActualizarJuego;
    bool Actualizado;
    json Cambios;
    Lista *ListaCambios;
};


#endif //PROYECTO1__EMPAQUETAR_H
