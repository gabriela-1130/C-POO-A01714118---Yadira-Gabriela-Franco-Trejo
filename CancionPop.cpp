
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

    cout << "Titulo: " << titulo << endl;
    cout << "Artista: " << artista << endl;
    cout << "Genero: " << genero << endl;
    cout << "Mood: " << mood << endl;
    cout << "Energia: " << energia << endl;
    cout << "Duracion: " << duracion << " min" << endl;
}
