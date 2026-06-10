#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include "Historial.h"
#include "Cancion.h"
#include "Playlist.h"

using namespace std;

class Usuario {

private:
    string nombre;
    int edad;
    string moodActual;
    int energia;
    string generoFavorito;

    Historial historial;

public:
    Usuario(
        string nombre,
        int edad,
        string moodActual,
        int energia,
        string generoFavorito
    );

    void iniciarSesion();
    void actualizarMood(string nuevoMood);
    void actualizarGeneroFavorito(string nuevoGenero);
    void verHistorial();
    void mostrarPerfil();

    Playlist crearPlaylist(string nombre, string moodPrincipal);
    void escucharCancion(Cancion* cancion);

    string getNombre();
    int getEdad();
    string getMoodActual();
    int getEnergia();
    string getGeneroFavorito();

    void setNombre(string nombre);
    void setEdad(int edad);
    void setMoodActual(string moodActual);
    void setEnergia(int energia);
    void setGeneroFavorito(string generoFavorito);
};

#endif
