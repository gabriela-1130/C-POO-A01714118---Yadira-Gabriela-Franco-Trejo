
#include "CancionPop.h"

CancionPop::CancionPop(
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

void CancionPop::reproducir() {
    cout << "Reproduciendo pop..." << endl;
}

void CancionPop::mostrarInfo() {
    cout << "Cancion Pop: " << titulo << endl;
}