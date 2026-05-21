
#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <vector>
#include "Cancion.h"

class Playlist {

private:
    string nombre;
    string moodPrincipal;
    vector<Cancion*> listaCanciones;

public:
    Playlist(string nombre, string moodPrincipal);

    void agregarCancion(Cancion* c);
    void agregarCancion(vector<Cancion*> canciones);

    void eliminarCancion();
    void mostrarPlaylist();
    string getNombre();

    //getters y setters
    string getMoodPrincipal();

    void setNombre(string nombre);
    void setMoodPrincipal(string moodPrincipal);
};

#endif