#ifndef RECOMENDADORGENERO_H
#define RECOMENDADORGENERO_H

#include "Recomendador.h"

class RecomendadorGenero : public Recomendador {

private:
    vector<string> generosPreferidos;
    string generoSeleccionado;

public:
    RecomendadorGenero();

    Playlist generarPlaylist(Biblioteca* biblioteca);
    vector<Cancion*> recomendarCanciones(Biblioteca* biblioteca);
};

#endif
