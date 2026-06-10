#ifndef RECOMENDADORMOOD_H
#define RECOMENDADORMOOD_H

#include "Recomendador.h"

class RecomendadorMood : public Recomendador {

private:
    vector<string> moodsCompatibles;
    string moodSeleccionado;

public:
    RecomendadorMood();

    Playlist generarPlaylist(Biblioteca* biblioteca);
    vector<Cancion*> recomendarCanciones(Biblioteca* biblioteca);
};

#endif
