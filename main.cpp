//Yadira Gabriela Franco Trejo A01714118

#include <iostream>
#include <vector>

using namespace std;


#include "Cancion.h"
#include "CancionRock.h"
#include "CancionPop.h"
#include "CancionIndie.h"
#include "CancionMetal.h"

#include "Playlist.h"

#include "Usuario.h"

#include "Recomendador.h"
#include "RecomendadorMood.h"
#include "RecomendadorGenero.h"
#include "RecomendadorEnergia.h"

#include "Biblioteca.h"
#include "Historial.h"

// =========================
// IMPLEMENTACIONES
// =========================

#include "Cancion.cpp"
#include "CancionRock.cpp"
#include "CancionPop.cpp"
#include "CancionIndie.cpp"
#include "CancionMetal.cpp"

#include "Playlist.cpp"

#include "Usuario.cpp"

#include "Recomendador.cpp"
#include "RecomendadorMood.cpp"
#include "RecomendadorGenero.cpp"
#include "RecomendadorEnergia.cpp"

#include "Biblioteca.cpp"
#include "Historial.cpp"

int main() {

    Cancion* c1 = new CancionRock(
        "Toxicity",
        "System of a Down",
        "Metal",
        "Energetico",
        9,
        3.5
    );

    Cancion* c2 = new CancionPop(
        "Blinding Lights",
        "The Weeknd",
        "Pop",
        "Feliz",
        8,
        3.2
    );

    Cancion* c3 = new CancionIndie(
        "Apocalypse",
        "Cigarettes After Sex",
        "Indie",
        "Melancolico",
        4,
        4.5
    );

    Cancion* c4 = new CancionMetal(
        "Master of Puppets",
        "Metallica",
        "Metal",
        "Energetico",
        10,
        8.3
    );


    c1->mostrarInfo();
    cout << endl;

    c2->mostrarInfo();
    cout << endl;

    c3->mostrarInfo();
    cout << endl;

    c4->mostrarInfo();
    cout << endl;

//playlist

    Playlist p1(
        "Noches Tristes",
        "Melancolico"
    );

//Sobrecarga 
    // Agregar UNA cancion
    p1.agregarCancion(c1);

    //Varias canciones
    vector<Cancion*> canciones;

    canciones.push_back(c2);
    canciones.push_back(c3);
    canciones.push_back(c4);

    p1.agregarCancion(canciones);

    //playlist 
    cout << endl;

    p1.mostrarPlaylist();


    //Clases colaborando entre sí
    Usuario u1(
    "Gaby",
    17,
    "Melancolico",
    4,
    "Estudiar",
    "Indie"
    );

    u1.iniciarSesion();

    u1.escucharCancion(c3);

    cout << endl;

    u1.verHistorial();

    //Crear recomendadores
    cout << endl;
    cout << "===== RECOMENDADORES =====" << endl;
    cout << endl;

    Recomendador* r1 = new RecomendadorMood();

    Recomendador* r2 = new RecomendadorGenero();

    Recomendador* r3 = new RecomendadorEnergia();

    //Generar playlists
    Playlist moodPlaylist = r1->generarPlaylist();

    Playlist generoPlaylist = r2->generarPlaylist();

    Playlist energiaPlaylist = r3->generarPlaylist();

    //Mostrarlas 
    cout << endl;

    moodPlaylist.mostrarPlaylist();

    cout << endl;

    generoPlaylist.mostrarPlaylist();

    cout << endl;

    energiaPlaylist.mostrarPlaylist();

    return 0;
}