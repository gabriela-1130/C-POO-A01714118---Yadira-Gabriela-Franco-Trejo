// =========================
// CancionMetal.cpp
// =========================

#include "CancionMetal.h"

CancionMetal::CancionMetal(
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

void CancionMetal::reproducir() {
    cout << "Reproduciendo metal..." << endl;
}

void CancionMetal::mostrarInfo() {
    cout << "Cancion Metal: " << titulo << endl;
}