#ifndef RECOMENDADOR_H
#define RECOMENDADOR_H

#include <vector>
#include <string>
#include "Playlist.h"
#include "Biblioteca.h"

using namespace std;

class Recomendador {

protected:
    vector<string> criterios;
    vector<Playlist> historialRecomendaciones;

public:
    virtual Playlist generarPlaylist(Biblioteca* biblioteca) = 0;
    virtual vector<Cancion*> recomendarCanciones(Biblioteca* biblioteca) = 0;
    virtual ~Recomendador() {}
};

#endif
