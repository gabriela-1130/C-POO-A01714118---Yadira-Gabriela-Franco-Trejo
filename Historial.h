
#ifndef HISTORIAL_H
#define HISTORIAL_H

#include <vector>
#include "Cancion.h"

class Historial {

private:
    vector<Cancion*> cancionesEscuchadas;
    vector<string> moodsFrecuentes;

public:
    void guardarReproduccion();
    void mostrarResumen();
    void guardarReproduccion(Cancion* cancion);
    void agregarMood(string mood);  
};

#endif