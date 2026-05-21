
#ifndef RECOMENDADOR_H
#define RECOMENDADOR_H

#include <vector>
#include "Playlist.h"

class Recomendador {

protected:
    vector<string> criterios;
    vector<Playlist> historialRecomendaciones;

public:
    virtual Playlist generarPlaylist() = 0;
    virtual vector<Cancion*> recomendarCanciones() = 0;
};

#endif