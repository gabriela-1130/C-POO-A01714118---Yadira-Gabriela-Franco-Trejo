
#ifndef RECOMENDADORMOOD_H
#define RECOMENDADORMOOD_H

#include "Recomendador.h"

class RecomendadorMood : public Recomendador {

private:
    vector<string> moodsCompatibles;

public:
    Playlist generarPlaylist() override;
    vector<Cancion*> recomendarCanciones() override;
};

#endif