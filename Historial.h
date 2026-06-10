#ifndef HISTORIAL_H
#define HISTORIAL_H

#include <vector>
#include <string>
#include "Cancion.h"

using namespace std;

class Historial {

private:
    vector<Cancion*> cancionesEscuchadas;
    vector<string> moodsFrecuentes;

public:
    void guardarReproduccion();
    void guardarReproduccion(Cancion* cancion);

    void agregarMood(string mood);
    string obtenerMoodFrecuente();

    void mostrarResumen();
};

#endif
