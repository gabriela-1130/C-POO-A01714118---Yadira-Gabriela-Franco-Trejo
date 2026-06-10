#include "Biblioteca.h"

#include <fstream>
#include <sstream>

#include "CancionRock.h"
#include "CancionPop.h"
#include "CancionIndie.h"
#include "CancionMetal.h"

Biblioteca::Biblioteca() {}

Biblioteca::~Biblioteca() {
    for (Cancion* c : catalogo) {
        delete c;
    }
}

void Biblioteca::agregarCancion(Cancion* cancion) {
    catalogo.push_back(cancion);
}

void Biblioteca::agregarPlaylist(Playlist playlist) {
    playlistDisponibles.push_back(playlist);
}

void Biblioteca::mostrarCatalogo() {

    cout << "===== CATALOGO DE CANCIONES =====" << endl;

    for (int i = 0; i < catalogo.size(); i++) {

        cout << i + 1 << ". "
             << catalogo[i]->getTitulo()
             << " - "
             << catalogo[i]->getArtista()
             << " ["
             << catalogo[i]->getGenero()
             << "]"
             << endl;
    }
}

Cancion* Biblioteca::buscarCancion(string nombre) {

    for (Cancion* c : catalogo) {

        if (c->getTitulo() == nombre) {
            return c;
        }
    }

    return nullptr;
}

vector<Cancion*> Biblioteca::buscarGenero(string genero) {

    vector<Cancion*> resultados;

    for (Cancion* c : catalogo) {

        if (c->getGenero() == genero) {
            resultados.push_back(c);
        }
    }

    return resultados;
}

vector<Cancion*> Biblioteca::buscarMood(string mood) {

    vector<Cancion*> resultados;

    for (Cancion* c : catalogo) {

        if (c->getMood() == mood) {
            resultados.push_back(c);
        }
    }

    return resultados;
}

Cancion* Biblioteca::obtenerCancion(int indice) {

    if (indice < 1 || indice > (int)catalogo.size()) {
        return nullptr;
    }

    return catalogo[indice - 1];
}

void Biblioteca::cargarCancionesDesdeArchivo(string nombreArchivo) {

    ifstream archivo(nombreArchivo);

    if (!archivo.is_open()) {

        cout << "Error: no se pudo abrir el archivo "
             << nombreArchivo << endl;

        return;
    }

    string linea;

    getline(archivo, linea);

    while (getline(archivo, linea)) {

        if (linea == "") {
            continue;
        }

        stringstream ss(linea);

        string titulo;
        string artista;
        string genero;
        string mood;
        string energiaTexto;
        string duracionTexto;

        getline(ss, titulo, ',');
        getline(ss, artista, ',');
        getline(ss, genero, ',');
        getline(ss, mood, ',');
        getline(ss, energiaTexto, ',');
        getline(ss, duracionTexto, ',');

        int energia = stoi(energiaTexto);
        float duracion = stof(duracionTexto);

        if (genero == "Rock") {

            agregarCancion(
                new CancionRock(
                    titulo,
                    artista,
                    genero,
                    mood,
                    energia,
                    duracion
                )
            );
        }

        else if (genero == "Pop") {

            agregarCancion(
                new CancionPop(
                    titulo,
                    artista,
                    genero,
                    mood,
                    energia,
                    duracion
                )
            );
        }

        else if (genero == "Indie") {

            agregarCancion(
                new CancionIndie(
                    titulo,
                    artista,
                    genero,
                    mood,
                    energia,
                    duracion
                )
            );
        }

        else if (genero == "Metal") {

            agregarCancion(
                new CancionMetal(
                    titulo,
                    artista,
                    genero,
                    mood,
                    energia,
                    duracion
                )
            );
        }
    }

    archivo.close();

    cout << "Canciones cargadas correctamente desde "
         << nombreArchivo << endl;
}
