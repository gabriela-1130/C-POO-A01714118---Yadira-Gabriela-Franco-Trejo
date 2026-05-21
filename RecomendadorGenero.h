
#ifndef RECOMENDADORGENERO_H
#define RECOMENDADORGENERO_H

#include "Recomendador.h"

class RecomendadorGenero : public Recomendador {

private:
    vector<string> generosPreferidos;

public:
    Playlist generarPlaylist() override;
    vector<Cancion*> recomendarCanciones() override;
};

#endif