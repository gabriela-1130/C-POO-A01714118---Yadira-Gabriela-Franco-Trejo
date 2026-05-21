// =========================
// RecomendadorEnergia.h
// =========================

#ifndef RECOMENDADORENERGIA_H
#define RECOMENDADORENERGIA_H

#include "Recomendador.h"

class RecomendadorEnergia : public Recomendador {

private:
    int nivelEnergia;

public:
    Playlist generarPlaylist() override;
    vector<Cancion*> recomendarCanciones() override;
};

#endif