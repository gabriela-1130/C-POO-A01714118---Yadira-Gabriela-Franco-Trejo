
#ifndef CANCIONROCK_H
#define CANCIONROCK_H

#include "Cancion.h"

class CancionRock : public Cancion {

public:
    CancionRock(
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
