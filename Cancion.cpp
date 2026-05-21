
#include "Cancion.h"

Cancion::Cancion(
    string titulo,
    string artista,
    string genero,
    string mood,
    int energia,
    float duracion
) {
    this->titulo = titulo;
    this->artista = artista;
    this->genero = genero;
    this->mood = mood;
    this->energia = energia;
    this->duracion = duracion;
}

void Cancion::reproducir() {
    cout << "Reproduciendo cancion..." << endl;
}

void Cancion::mostrarInfo() {
    cout << "Titulo: " << titulo << endl;
    cout << "Artista: " << artista << endl;
}

//getters y setters
string Cancion::getTitulo() {
    return titulo;
}

string Cancion::getArtista() {
    return artista;
}

string Cancion::getGenero() {
    return genero;
}

string Cancion::getMood() {
    return mood;
}

int Cancion::getEnergia() {
    return energia;
}

float Cancion::getDuracion() {
    return duracion;
}

void Cancion::setTitulo(string titulo) {
    this->titulo = titulo;
}

void Cancion::setArtista(string artista) {
    this->artista = artista;
}

void Cancion::setGenero(string genero) {
    this->genero = genero;
}

void Cancion::setMood(string mood) {
    this->mood = mood;
}

void Cancion::setEnergia(int energia) {
    this->energia = energia;
}

void Cancion::setDuracion(float duracion) {
    this->duracion = duracion;
}