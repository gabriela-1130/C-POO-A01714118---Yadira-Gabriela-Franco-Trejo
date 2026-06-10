
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

    cout << "Titulo: " << titulo << endl;
    cout << "Artista: " << artista << endl;
    cout << "Genero: " << genero << endl;
    cout << "Mood: " << mood << endl;
    cout << "Energia: " << energia << endl;
    cout << "Duracion: " << duracion << " min" << endl;
}
