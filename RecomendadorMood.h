
#ifndef RECOMENDADORMOOD_H
#define RECOMENDADORMOOD_H

#include "Recomendador.h"

class RecomendadorMood : public Recomendador {

private:
    vector<string> moodsCompatibles;

public:
    Playlist generarPlaylist();
    vector<Cancion*> recomendarCanciones();
};

#endif
