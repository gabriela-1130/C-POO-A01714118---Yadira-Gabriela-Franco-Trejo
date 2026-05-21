
#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include "Historial.h"
#include "Cancion.h"

using namespace std;

class Usuario {

private:
    string nombre;
    int edad;
    string moodActual;
    int energia;
    string actividadFavorita;
    string generoFavorito;

    Historial historial;

public:
    Usuario(
        string nombre,
        int edad,
        string moodActual,
        int energia,
        string actividadFavorita,
        string generoFavorito
    );

    void iniciarSesion();
    void actualizarMood();
    void verHistorial();

    //getters y setters
    string getNombre();
    int getEdad();
    string getMoodActual();
    int getEnergia();
    string getActividadFavorita();
    string getGeneroFavorito();

    void setNombre(string nombre);
    void setEdad(int edad);
    void setMoodActual(string moodActual);
    void setEnergia(int energia);
    void setActividadFavorita(string actividadFavorita);
    void setGeneroFavorito(string generoFavorito);
    void escucharCancion(Cancion* cancion);
};

#endif