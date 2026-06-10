#include "Historial.h"

void Historial::guardarReproduccion() {
    cout << "Reproduccion guardada." << endl;
}

void Historial::guardarReproduccion(Cancion* cancion) {

    cancionesEscuchadas.push_back(cancion);

    cout << "Reproduccion guardada: "
         << cancion->getTitulo()
         << endl;
}

void Historial::agregarMood(string mood) {
    moodsFrecuentes.push_back(mood);
}

string Historial::obtenerMoodFrecuente() {

    if (moodsFrecuentes.size() == 0) {
        return "Sin datos";
    }

    string moodMasFrecuente = moodsFrecuentes[0];
    int mayorCantidad = 0;

    for (int i = 0; i < moodsFrecuentes.size(); i++) {

        int contador = 0;

        for (int j = 0; j < moodsFrecuentes.size(); j++) {

            if (moodsFrecuentes[i] == moodsFrecuentes[j]) {
                contador++;
            }
        }

        if (contador > mayorCantidad) {
            mayorCantidad = contador;
            moodMasFrecuente = moodsFrecuentes[i];
        }
    }

    return moodMasFrecuente;
}

void Historial::mostrarResumen() {

    cout << endl;
    cout << "===== HISTORIAL =====" << endl;

    if (cancionesEscuchadas.size() == 0) {

        cout << "No hay canciones registradas." << endl;

        return;
    }

    cout << endl;
    cout << "Canciones escuchadas:" << endl;

    for (int i = 0; i < cancionesEscuchadas.size(); i++) {

        cout << i + 1 << ". "
             << cancionesEscuchadas[i]->getTitulo()
             << " - "
             << cancionesEscuchadas[i]->getArtista()
             << endl;
    }

    cout << endl;
    cout << "Moods registrados:" << endl;

    for (int i = 0; i < moodsFrecuentes.size(); i++) {

        cout << "- " << moodsFrecuentes[i] << endl;
    }

    cout << endl;
    cout << "Mood mas frecuente: "
         << obtenerMoodFrecuente()
         << endl;
}
