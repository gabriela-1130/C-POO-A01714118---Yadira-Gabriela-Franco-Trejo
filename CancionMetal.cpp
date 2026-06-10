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

    cout << "Titulo: " << titulo << endl;
    cout << "Artista: " << artista << endl;
    cout << "Genero: " << genero << endl;
    cout << "Mood: " << mood << endl;
    cout << "Energia: " << energia << endl;
    cout << "Duracion: " << duracion << " min" << endl;
}
