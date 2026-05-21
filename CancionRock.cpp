
#include "CancionRock.h"

CancionRock::CancionRock(
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

void CancionRock::reproducir() {
    cout << "Reproduciendo rock..." << endl;
}

void CancionRock::mostrarInfo() {
    cout << "Cancion Rock: " << titulo << endl;
}