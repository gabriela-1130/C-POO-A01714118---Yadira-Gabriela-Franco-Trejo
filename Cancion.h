
#ifndef CANCION_H
#define CANCION_H

#include <iostream>
#include <string>
using namespace std;

class Cancion {
protected:
    string titulo;
    string artista;
    string genero;
    string mood;
    int energia;
    float duracion;

public:
    virtual ~Cancion() {}
    Cancion(
        string titulo,
        string artista,
        string genero,
        string mood,
        int energia,
        float duracion
    );

    virtual void reproducir();
    virtual void mostrarInfo();

    //getters y setters
    string getTitulo();
    string getArtista();
    string getGenero();
    string getMood();
    int getEnergia();
    float getDuracion();

    void setTitulo(string titulo);
    void setArtista(string artista);
    void setGenero(string genero);
    void setMood(string mood);
    void setEnergia(int energia);
    void setDuracion(float duracion);
};



#endif
