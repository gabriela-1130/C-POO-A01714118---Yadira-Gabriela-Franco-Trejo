
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

void Playlist::eliminarCancion(int indice) {
    if (indice < 1 || indice > (int)listaCanciones.size()) {
        cout << "Indice invalido." << endl;
        return;
    }

    listaCanciones.erase(listaCanciones.begin() + indice - 1);

    cout << "Cancion eliminada de la playlist." << endl;
}

void Playlist::mostrarPlaylist() {

    cout << "----------------------------" << endl;
    cout << "Playlist: " << nombre << endl;
    cout << "Mood principal: " << moodPrincipal << endl;
    cout << "Canciones:" << endl;

    for (int i = 0; i < listaCanciones.size(); i++) {

        cout << i + 1 << ". ";

        cout << listaCanciones[i]->getTitulo() << " - " << listaCanciones[i]->getArtista() << endl;

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
