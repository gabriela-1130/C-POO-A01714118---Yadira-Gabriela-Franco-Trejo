// Yadira Gabriela Franco Trejo A01714118

#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "Cancion.h"
#include "CancionRock.h"
#include "CancionPop.h"
#include "CancionIndie.h"
#include "CancionMetal.h"

#include "Playlist.h"
#include "Usuario.h"
#include "Historial.h"
#include "Biblioteca.h"

#include "Recomendador.h"
#include "RecomendadorMood.h"
#include "RecomendadorGenero.h"
#include "RecomendadorEnergia.h"

#include "Cancion.cpp"
#include "CancionRock.cpp"
#include "CancionPop.cpp"
#include "CancionIndie.cpp"
#include "CancionMetal.cpp"

#include "Playlist.cpp"
#include "Usuario.cpp"
#include "Historial.cpp"
#include "Biblioteca.cpp"

#include "Recomendador.cpp"
#include "RecomendadorMood.cpp"
#include "RecomendadorGenero.cpp"
#include "RecomendadorEnergia.cpp"

void mostrarMenu() {
    cout << endl;
    cout << "------------------------------------" << endl;
    cout << " SISTEMA DE RECOMENDACION MUSICAL" << endl;
    cout << "------------------------------------" << endl;
    cout << "1. Mostrar catalogo" << endl;
    cout << "2. Buscar cancion por titulo" << endl;
    cout << "3. Escuchar cancion" << endl;
    cout << "4. Crear playlist" << endl;
    cout << "5. Ver mis playlists" << endl;
    cout << "6. Agregar cancion a playlist" << endl;
    cout << "7. Eliminar cancion de playlist" << endl;
    cout << "8. Ver historial" << endl;
    cout << "9. Recomendar musica" << endl;
    cout << "10. Ver perfil" << endl;
    cout << "11. Salir" << endl;
    cout << "Opcion: ";
}

void mostrarPlaylists(vector<Playlist>& playlists) {
    if (playlists.size() == 0) {
        cout << "No tienes playlists creadas." << endl;
        return;
    }

    cout << endl;
    cout << "----- MIS PLAYLISTS -----" << endl;

    for (int i = 0; i < playlists.size(); i++) {
        cout << i + 1 << ". " << playlists[i].getNombre()
             << " (" << playlists[i].getMoodPrincipal() << ")" << endl;
    }
}

int elegirPlaylist(vector<Playlist>& playlists) {
    if (playlists.size() == 0) {
        cout << "Primero debes crear una playlist." << endl;
        return -1;
    }

    mostrarPlaylists(playlists);

    int indice;
    cout << "Elige el numero de playlist: ";
    cin >> indice;

    if (indice < 1 || indice > (int)playlists.size()) {
        cout << "Indice invalido." << endl;
        return -1;
    }

    return indice - 1;
}

void guardarPlaylistRecomendada(vector<Playlist>& playlists, Playlist playlist) {
    int opcion;

    cout << endl;
    cout << "Quieres guardar esta playlist?" << endl;
    cout << "1. Si" << endl;
    cout << "2. No" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        playlists.push_back(playlist);
        cout << "Playlist guardada correctamente." << endl;
    }
    else {
        cout << "Playlist no guardada." << endl;
    }
}

int main() {

    Biblioteca biblioteca;

    biblioteca.cargarCancionesDesdeArchivo("canciones.csv");

    string nombreUsuario;
    int edad;
    string moodActual;
    int energia;
    string generoFavorito;
    int opcionGenero;

    cout << "----- CREAR PERFIL -----" << endl;

    cout << "Nombre: ";
    getline(cin, nombreUsuario);

    cout << "Edad: ";
    cin >> edad;
    cin.ignore();

    cout << "Mood actual: ";
    getline(cin, moodActual);

    cout << "Nivel de energia (1-10): ";
    cin >> energia;
    if (energia < 1) {
    energia = 1;
    }
    else if (energia > 10) {
        energia = 10;
    }
    cin.ignore();
    


    cout << endl;
    cout << "Genero favorito:" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Indie" << endl;
    cout << "4. Metal" << endl;
    cout << "Opcion: ";
    cin >> opcionGenero;
    cin.ignore();

    if (opcionGenero == 1) {
        generoFavorito = "Rock";
    }
    else if (opcionGenero == 2) {
        generoFavorito = "Pop";
    }
    else if (opcionGenero == 3) {
        generoFavorito = "Indie";
    }
    else if (opcionGenero == 4) {
        generoFavorito = "Metal";
    }
    else {
        generoFavorito = "Rock";
    }

    Usuario usuario(
        nombreUsuario,
        edad,
        moodActual,
        energia,
        generoFavorito
    );

    usuario.iniciarSesion();

    vector<Playlist> misPlaylists;

    int opcion = 0;

    while (opcion != 11)  {

        mostrarMenu();
        cin >> opcion;
        cin.ignore();

        if (opcion == 1) {

            biblioteca.mostrarCatalogo();
        }

        else if (opcion == 2) {

            string titulo;

            cout << "Escribe el titulo exacto de la cancion: ";
            getline(cin, titulo);

            Cancion* encontrada = biblioteca.buscarCancion(titulo);

            if (encontrada != nullptr) {
                cout << "Cancion encontrada:" << endl;
                encontrada->mostrarInfo();

                int escuchar;
                cout << "Quieres escuchar esta cancion?" << endl;
                cout << "1. Si" << endl;
                cout << "2. No" << endl;
                cout << "Opcion: ";
                cin >> escuchar;

                if (escuchar == 1) {
                    usuario.escucharCancion(encontrada);
                }

                cin.ignore();
            }
            else {
                cout << "No se encontro la cancion." << endl;
            }
        }

        else if (opcion == 3) {

            int indice;

            biblioteca.mostrarCatalogo();

            cout << "Elige el numero de la cancion que quieres escuchar: ";
            cin >> indice;

            Cancion* cancion = biblioteca.obtenerCancion(indice);

            usuario.escucharCancion(cancion);
        }

        else if (opcion == 4) {

            string nombrePlaylist;
            string moodPlaylist;

            cout << "Nombre de la playlist: ";
            getline(cin, nombrePlaylist);

            cout << "Mood principal de la playlist: ";
            getline(cin, moodPlaylist);

            Playlist nueva = usuario.crearPlaylist(
                nombrePlaylist,
                moodPlaylist
            );

            misPlaylists.push_back(nueva);

            biblioteca.agregarPlaylist(nueva);
        }

        else if (opcion == 5) {

            mostrarPlaylists(misPlaylists);

            if (misPlaylists.size() > 0) {
                int ver;

                cout << "Quieres ver el contenido de alguna playlist?" << endl;
                cout << "1. Si" << endl;
                cout << "2. No" << endl;
                cout << "Opcion: ";
                cin >> ver;

                if (ver == 1) {
                    int indicePlaylist = elegirPlaylist(misPlaylists);

                    if (indicePlaylist != -1) {
                        misPlaylists[indicePlaylist].mostrarPlaylist();
                    }
                }
            }
        }

        else if (opcion == 6) {

            int indicePlaylist = elegirPlaylist(misPlaylists);

            if (indicePlaylist != -1) {

                int indiceCancion;

                biblioteca.mostrarCatalogo();

                cout << "Elige el numero de la cancion que quieres agregar: ";
                cin >> indiceCancion;

                Cancion* cancion = biblioteca.obtenerCancion(indiceCancion);

                if (cancion != nullptr) {
                    misPlaylists[indicePlaylist].agregarCancion(cancion);
                    cout << "Cancion agregada correctamente." << endl;
                }
                else {
                    cout << "Cancion invalida." << endl;
                }
            }
        }

        else if (opcion == 7) {

            int indicePlaylist = elegirPlaylist(misPlaylists);

            if (indicePlaylist != -1) {
                misPlaylists[indicePlaylist].mostrarPlaylist();

                int indiceCancion;

                cout << "Elige el numero de la cancion a eliminar: ";
                cin >> indiceCancion;

                misPlaylists[indicePlaylist].eliminarCancion(indiceCancion);
            }
        }

        else if (opcion == 8) {

            usuario.verHistorial();
        }

        else if (opcion == 9) {

            int tipo;

            cout << endl;
            cout << "----- RECOMENDADOR MUSICAL -----" << endl;
            cout << "1. Recomendacion por mood" << endl;
            cout << "2. Recomendacion por genero" << endl;
            cout << "3. Recomendacion por energia" << endl;
            cout << "Opcion: ";
            cin >> tipo;

            Recomendador* recomendador = nullptr;

            if (tipo == 1) {
                recomendador = new RecomendadorMood();
            }
            else if (tipo == 2) {
                recomendador = new RecomendadorGenero();
            }
            else if (tipo == 3) {
                recomendador = new RecomendadorEnergia();
            }
            else {
                cout << "Opcion invalida." << endl;
            }

            if (recomendador != nullptr) {

                Playlist recomendada =
                    recomendador->generarPlaylist(&biblioteca);

                recomendada.mostrarPlaylist();

                guardarPlaylistRecomendada(
                    misPlaylists,
                    recomendada
                );

                delete recomendador;
            }
        }

        else if (opcion == 10) {

            usuario.mostrarPerfil();
        }

        else if (opcion == 11) {

            cout << "Saliendo del sistema..." << endl;
        }

        else {

            cout << "Opcion invalida." << endl;
        }
    }

    return 0;
}
