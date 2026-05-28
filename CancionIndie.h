
#ifndef CANCIONINDIE_H
#define CANCIONINDIE_H

#include "Cancion.h"

class CancionIndie : public Cancion {

public:
    CancionIndie(
        string titulo,
        string artista,
        string genero,
        string mood,
        int energia,
        float duracion
    );

    virtual void reproducir();
    virtual void mostrarInfo();
};

#endif
