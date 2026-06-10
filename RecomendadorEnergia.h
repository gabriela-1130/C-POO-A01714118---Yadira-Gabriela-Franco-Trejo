#ifndef RECOMENDADORENERGIA_H
#define RECOMENDADORENERGIA_H

#include "Recomendador.h"

class RecomendadorEnergia : public Recomendador {

private:
    int nivelEnergia;

public:
    RecomendadorEnergia();

    Playlist generarPlaylist(Biblioteca* biblioteca);
    vector<Cancion*> recomendarCanciones(Biblioteca* biblioteca);
};

#endif
