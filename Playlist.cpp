
#include "Playlist.h"

Playlist::Playlist(string nombre, string moodPrincipal) {
    this->nombre = nombre;
    this->moodPrincipal = moodPrincipal;
}

void Playlist::agregarCancion(Cancion* c) {
    listaCanciones.push_back(c);
}

void Playlist::agregarCancion(vector<Cancion*> canciones) {

    for (Cancion* c : canciones) {
        listaCanciones.push_back(c);
    }
}

void Playlist::eliminarCancion() {
    cout << "Cancion eliminada" << endl;
}

void Playlist::mostrarPlaylist() {
    cout << "----------------------------" << endl;
    cout << "Playlist: " << nombre << endl;
    cout << "Mood principal: " << moodPrincipal << endl;
    cout << "Canciones:" << endl;

    for (Cancion* c : listaCanciones) {
        c->mostrarInfo();
        cout << endl;
    }

    cout << "----------------------------" << endl;
}

//getters y setters
string Playlist::getNombre() {
    return nombre;
}

string Playlist::getMoodPrincipal() {
    return moodPrincipal;
}

void Playlist::setNombre(string nombre) {
    this->nombre = nombre;
}

void Playlist::setMoodPrincipal(string moodPrincipal) {
    this->moodPrincipal = moodPrincipal;
}