
#ifndef CANCIONPOP_H
#define CANCIONPOP_H

#include "Cancion.h"

class CancionPop : public Cancion {

public:
    CancionPop(
        string titulo,
        string artista,
        string genero,
        string mood,
        int energia,
        float duracion
    );

    void reproducir();
    void mostrarInfo();
};

#endif
