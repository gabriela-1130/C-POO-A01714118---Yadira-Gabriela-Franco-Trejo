
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

    cout << "Titulo: " << titulo << endl;
    cout << "Artista: " << artista << endl;
    cout << "Genero: " << genero << endl;
    cout << "Mood: " << mood << endl;
    cout << "Energia: " << energia << endl;
    cout << "Duracion: " << duracion << " min" << endl;
}
