
#include "RecomendadorMood.h"

Playlist RecomendadorMood::generarPlaylist() {

    Playlist p(
        "Playlist Emocional",
        "Melancolico"
    );

    cout << "Generando playlist basada en mood..." << endl;

    return p;
}

vector<Cancion*> RecomendadorMood::recomendarCanciones() {

    vector<Cancion*> canciones;

    return canciones;
}