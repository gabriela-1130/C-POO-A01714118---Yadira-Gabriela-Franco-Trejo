
#include "Usuario.h"

Usuario::Usuario(
    string nombre,
    int edad,
    string moodActual,
    int energia,
    string generoFavorito
) {
    this->nombre = nombre;
    this->edad = edad;
    this->moodActual = moodActual;
    this->energia = energia;
    this->generoFavorito = generoFavorito;
}

void Usuario::iniciarSesion() {
    cout << nombre << " inicio sesion" << endl;
}

void Usuario::actualizarMood(string nuevoMood) {
    moodActual = nuevoMood;
    cout << "Mood actualizado a: " << moodActual << endl;
}
void Usuario::actualizarGeneroFavorito(string nuevoGenero) {
    generoFavorito = nuevoGenero;
    cout << "Genero favorito actualizado a: " << generoFavorito << endl;
}
Playlist Usuario::crearPlaylist(string nombre, string moodPrincipal) {
    Playlist nuevaPlaylist(nombre, moodPrincipal);
    cout << "Playlist creada: " << nombre << endl;
    return nuevaPlaylist;
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

void Usuario::setGeneroFavorito(string generoFavorito) {
    this->generoFavorito = generoFavorito;
}

void Usuario::escucharCancion(Cancion* cancion) {
    if (cancion == nullptr) {
        cout << "No se puede escuchar una cancion inexistente." << endl;
        return;
    }

    cout << nombre << " esta escuchando: " << cancion->getTitulo() << endl;
    cancion->reproducir();
    historial.guardarReproduccion(cancion);
    historial.agregarMood(cancion->getMood());
}

void Usuario::mostrarPerfil() {

    int opcion;

    cout << endl;
    cout << "===== PERFIL DE USUARIO =====" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Mood actual: " << moodActual << endl;
    cout << "Energia: " << energia << endl;
    cout << "Genero favorito: " << generoFavorito << endl;

    cout << endl;
    cout << "1. Cambiar mood" << endl;
    cout << "2. Cambiar genero favorito" << endl;
    cout << "3. Regresar" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion == 1) {

        int opcionMood;
        string nuevoMood;

        cout << endl;
        cout << "===== CAMBIAR MOOD =====" << endl;
        cout << "1. Feliz" << endl;
        cout << "2. Triste" << endl;
        cout << "3. Melancolico" << endl;
        cout << "4. Energetico" << endl;
        cout << "5. Relajado" << endl;
        cout << "Opcion: ";
        cin >> opcionMood;

        if (opcionMood == 1) {
            nuevoMood = "Feliz";
        }
        else if (opcionMood == 2) {
            nuevoMood = "Triste";
        }
        else if (opcionMood == 3) {
            nuevoMood = "Melancolico";
        }
        else if (opcionMood == 4) {
            nuevoMood = "Energetico";
        }
        else if (opcionMood == 5) {
            nuevoMood = "Relajado";
        }
        else {
            cout << "Opcion invalida. Se mantiene el mood actual." << endl;
            return;
        }

        actualizarMood(nuevoMood);
    }

    else if (opcion == 2) {

        int opcionGenero;
        string nuevoGenero;

        cout << endl;
        cout << "===== CAMBIAR GENERO FAVORITO =====" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Indie" << endl;
        cout << "4. Metal" << endl;
        cout << "Opcion: ";
        cin >> opcionGenero;

        if (opcionGenero == 1) {
            nuevoGenero = "Rock";
        }
        else if (opcionGenero == 2) {
            nuevoGenero = "Pop";
        }
        else if (opcionGenero == 3) {
            nuevoGenero = "Indie";
        }
        else if (opcionGenero == 4) {
            nuevoGenero = "Metal";
        }
        else {
            cout << "Opcion invalida. Se mantiene el genero favorito actual." << endl;
            return;
        }

        actualizarGeneroFavorito(nuevoGenero);
    }
}
