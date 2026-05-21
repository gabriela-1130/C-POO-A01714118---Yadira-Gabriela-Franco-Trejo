
#include "CancionIndie.h"

CancionIndie::CancionIndie(
    string titulo,
    string artista,
    string genero,
    string mood,
    int energia,
    float duracion
)
: Cancion(
    titulo,
    artista,
    genero,
    mood,
    energia,
    duracion
) {}

void CancionIndie::reproducir() {
    cout << "Reproduciendo indie..." << endl;
}

void CancionIndie::mostrarInfo() {
    cout << "Cancion Indie: " << titulo << endl;
}