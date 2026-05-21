
#include "RecomendadorGenero.h"

Playlist RecomendadorGenero::generarPlaylist() {

    Playlist p(
        "Playlist de Genero",
        "Rock"
    );

    cout << "Generando playlist basada en genero..." << endl;

    return p;
}

vector<Cancion*> RecomendadorGenero::recomendarCanciones() {

    vector<Cancion*> canciones;

    return canciones;
}