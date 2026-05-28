
#ifndef CANCIONMETAL_H
#define CANCIONMETAL_H

#include "Cancion.h"

class CancionMetal : public Cancion {

public:
    CancionMetal(
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
