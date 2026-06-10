#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <iostream>
#include <vector>
#include <string>

#include "Cancion.h"
#include "Playlist.h"

using namespace std;

class Biblioteca {

private:
    vector<Cancion*> catalogo;
    vector<Playlist> playlistDisponibles;

public:
    Biblioteca();
    ~Biblioteca();

    void agregarCancion(Cancion* cancion);
    void agregarPlaylist(Playlist playlist);

    void mostrarCatalogo();

    Cancion* buscarCancion(string nombre);
    vector<Cancion*> buscarGenero(string genero);
    vector<Cancion*> buscarMood(string mood);

    Cancion* obtenerCancion(int indice);

    void cargarCancionesDesdeArchivo(string nombreArchivo);
};

#endif
