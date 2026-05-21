
#include "RecomendadorEnergia.h"

Playlist RecomendadorEnergia::generarPlaylist() {

    Playlist p(
        "Playlist Energetica",
        "Energia Alta"
    );

    cout << "Generando playlist basada en energia..." << endl;

    return p;
}

vector<Cancion*> RecomendadorEnergia::recomendarCanciones() {

    vector<Cancion*> canciones;

    return canciones;
}