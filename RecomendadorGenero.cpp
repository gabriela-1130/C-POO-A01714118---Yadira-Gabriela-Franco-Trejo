#include "RecomendadorGenero.h"

RecomendadorGenero::RecomendadorGenero() {
    generoSeleccionado = "";
}

vector<Cancion*> RecomendadorGenero::recomendarCanciones(Biblioteca* biblioteca) {

    return biblioteca->buscarGenero(generoSeleccionado);
}

Playlist RecomendadorGenero::generarPlaylist(Biblioteca* biblioteca) {

    int opcion;

    cout << endl;
    cout << "===== RECOMENDADOR POR GENERO =====" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Indie" << endl;
    cout << "4. Metal" << endl;
    cout << "Selecciona una opcion: ";
    cin >> opcion;

    if (opcion == 1) generoSeleccionado = "Rock";
    else if (opcion == 2) generoSeleccionado = "Pop";
    else if (opcion == 3) generoSeleccionado = "Indie";
    else generoSeleccionado = "Metal";

    Playlist p(
        "Playlist " + generoSeleccionado,
        generoSeleccionado
    );

    p.agregarCancion(
        recomendarCanciones(biblioteca)
    );

    historialRecomendaciones.push_back(p);

    return p;
}
