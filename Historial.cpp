
#include "Historial.h"

void Historial::guardarReproduccion(Cancion* cancion) {
    cancionesEscuchadas.push_back(cancion);
    cout << "Reproduccion guardada: " << cancion->getTitulo() << endl;
}

void Historial::agregarMood(string mood) {
    moodsFrecuentes.push_back(mood);
}

void Historial::mostrarResumen() {
    cout << "Historial de canciones escuchadas:" << endl;

    for (Cancion* c : cancionesEscuchadas) {
        cout << "- " << c->getTitulo() << endl;
    }

    cout << "Moods frecuentes:" << endl;

    for (string mood : moodsFrecuentes) {
        cout << "- " << mood << endl;
    }
}