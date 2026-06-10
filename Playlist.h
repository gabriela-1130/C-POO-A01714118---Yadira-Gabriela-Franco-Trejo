#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <vector>
#include <string>
#include "Cancion.h"

using namespace std;

class Playlist {

private:
    string nombre;
    string moodPrincipal;
    vector<Cancion*> listaCanciones;

public:
    Playlist(string nombre, string moodPrincipal);

    void agregarCancion(Cancion* c);
    void agregarCancion(vector<Cancion*> canciones);

    void eliminarCancion(int indice);
    void mostrarPlaylist();

    string getNombre();
    string getMoodPrincipal();

    void setNombre(string nombre);
    void setMoodPrincipal(string moodPrincipal);
};

#endif
