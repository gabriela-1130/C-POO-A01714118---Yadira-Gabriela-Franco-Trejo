#include "RecomendadorEnergia.h"

RecomendadorEnergia::RecomendadorEnergia() {
    nivelEnergia = 5;
}

vector<Cancion*> RecomendadorEnergia::recomendarCanciones(Biblioteca* biblioteca) {

    vector<Cancion*> canciones;

    for (int i = 1; ; i++) {

        Cancion* c = biblioteca->obtenerCancion(i);

        if (c == nullptr) {
            break;
        }

        if (nivelEnergia <= 3) {

            if (c->getEnergia() <= 3) {
                canciones.push_back(c);
            }

        }
        else if (nivelEnergia <= 7) {

            if (c->getEnergia() >= 4 &&
                c->getEnergia() <= 7) {

                canciones.push_back(c);
            }

        }
        else {

            if (c->getEnergia() >= 8) {
                canciones.push_back(c);
            }

        }
    }

    return canciones;
}

Playlist RecomendadorEnergia::generarPlaylist(Biblioteca* biblioteca) {

    cout << endl;
    cout << "===== RECOMENDADOR POR ENERGIA =====" << endl;
    cout << "Del 1 al 10, cuanta energia tienes hoy? ";
    cin >> nivelEnergia;
    if (nivelEnergia < 1) {
    nivelEnergia = 1;
}
    else if (nivelEnergia > 10) {
    nivelEnergia = 10;
    }

    Playlist p(
        "Playlist Segun Tu Energia",
        "Energia"
    );

    p.agregarCancion(
        recomendarCanciones(biblioteca)
    );

    historialRecomendaciones.push_back(p);

    return p;
}
