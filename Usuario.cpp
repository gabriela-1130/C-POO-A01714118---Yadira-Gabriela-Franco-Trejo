
#include "Usuario.h"

Usuario::Usuario(
    string nombre,
    int edad,
    string moodActual,
    int energia,
    string actividadFavorita,
    string generoFavorito
) {
    this->nombre = nombre;
    this->edad = edad;
    this->moodActual = moodActual;
    this->energia = energia;
    this->actividadFavorita = actividadFavorita;
    this->generoFavorito = generoFavorito;
}

void Usuario::iniciarSesion() {
    cout << nombre << " inicio sesion" << endl;
}

void Usuario::actualizarMood() {
    cout << "Mood actualizado" << endl;
}

void Usuario::verHistorial() {
    historial.mostrarResumen();
}

//getters y setters
string Usuario::getNombre() {
    return nombre;
}

int Usuario::getEdad() {
    return edad;
}

string Usuario::getMoodActual() {
    return moodActual;
}

int Usuario::getEnergia() {
    return energia;
}

string Usuario::getActividadFavorita() {
    return actividadFavorita;
}

string Usuario::getGeneroFavorito() {
    return generoFavorito;
}

void Usuario::setNombre(string nombre) {
    this->nombre = nombre;
}

void Usuario::setEdad(int edad) {
    this->edad = edad;
}

void Usuario::setMoodActual(string moodActual) {
    this->moodActual = moodActual;
}

void Usuario::setEnergia(int energia) {
    this->energia = energia;
}

void Usuario::setActividadFavorita(string actividadFavorita) {
    this->actividadFavorita = actividadFavorita;
}

void Usuario::setGeneroFavorito(string generoFavorito) {
    this->generoFavorito = generoFavorito;
}

void Usuario::escucharCancion(Cancion* cancion) {
    cout << nombre << " esta escuchando: " << cancion->getTitulo() << endl;
    cancion->reproducir();
    historial.guardarReproduccion(cancion);
    historial.agregarMood(cancion->getMood());
}