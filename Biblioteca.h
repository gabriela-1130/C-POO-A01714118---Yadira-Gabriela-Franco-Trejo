#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include "Cancion.h"
#include "Playlist.h"

class Biblioteca {

private:
    vector<Cancion*> catalogoCanciones;
    vector<Playlist> playlistsDisponibles;

public:
    void buscarCancion();
    void buscarGenero();
    void buscarMood();
};

#endif