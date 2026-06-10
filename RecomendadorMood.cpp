#include "RecomendadorMood.h"

RecomendadorMood::RecomendadorMood() {
    moodSeleccionado = "";
}

vector<Cancion*> RecomendadorMood::recomendarCanciones(Biblioteca* biblioteca) {

    return biblioteca->buscarMood(moodSeleccionado);
}

Playlist RecomendadorMood::generarPlaylist(Biblioteca* biblioteca) {

    int opcion;

    cout << endl;
    cout << "===== RECOMENDADOR POR MOOD =====" << endl;
    cout << "1. Feliz" << endl;
    cout << "2. Triste" << endl;
    cout << "3. Melancolico" << endl;
    cout << "4. Energetico" << endl;
    cout << "5. Relajado" << endl;
    cout << "Selecciona una opcion: ";
    cin >> opcion;

    if (opcion == 1) moodSeleccionado = "Feliz";
    else if (opcion == 2) moodSeleccionado = "Triste";
    else if (opcion == 3) moodSeleccionado = "Melancolico";
    else if (opcion == 4) moodSeleccionado = "Energetico";
    else moodSeleccionado = "Relajado";

    Playlist p(
        "Playlist " + moodSeleccionado,
        moodSeleccionado
    );

    p.agregarCancion(
        recomendarCanciones(biblioteca)
    );

    historialRecomendaciones.push_back(p);

    return p;
}
