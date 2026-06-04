# Proyecto Integrador POO
### Sistema de Recomendación Musical

Autor:  
Yadira Gabriela Franco Trejo  
A01714118

---

## Descripción ⋆.𐙚 ̊

Este proyecto consiste en un sistema de recomendación musical inspirado en plataformas de streaming como Spotify.

El sistema permite:
- añadir canciones de distintos géneros
- crear playlists
- recomendar playlists según mood, género o energía
- guardar historial de reproducción
- demostrar conceptos de Programación Orientada a Objetos como herencia, polimorfismo, clases abstractas y sobrecarga
 
---

## Conceptos de POO implementados ⊹ ࣪ ˖

### Herencia

Se implementó herencia mediante clases hijas como:

- CancionRock
- CancionPop
- CancionIndie
- CancionMetal

que heredan de la clase abstracta `Cancion`.

También:

- RecomendadorMood
- RecomendadorGenero
- RecomendadorEnergia

heredan de `Recomendador`.

---

### Clases Abstractas ✧.*

El proyecto utiliza las siguientes clases abstractas:

- `Cancion`
- `Recomendador`

Estas clases definen métodos virtuales puros que deben ser implementados por las clases hijas.

Ejemplos:

```cpp
virtual void reproducir() = 0;
virtual void mostrarInfo() = 0;
virtual Playlist generarPlaylist() = 0;
virtual vector<Cancion*> recomendarCanciones() = 0;
```
---

### Polimorfismo y sobrescritura .☘︎ ݁˖
El polimorfismo se implementó utilizando punteros a clases padre como:

```cpp
Cancion* c = new CancionRock(...);
Recomendador* r = new RecomendadorMood();
```

permitiendo ejecutar distintos comportamientos dependiendo del objeto hijo asociado.

Las clases hijas sobrescriben métodos como:

```cpp
mostrarInfo()
reproducir()
generarPlaylist()
```

permitiendo comportamiento distinto según el objeto.

---

### Sobrecarga de Métodos ♬⋆.˚

La clase `Playlist` implementa sobrecarga en:

```cpp
agregarCancion(Cancion* c)
agregarCancion(vector<Cancion*> canciones)
```
También la clase `Historial` implementa sobrecarga mediante:

```cpp
guardarReproduccion()
guardarReproduccion(Cancion* cancion)
```
---

### Modificadores de acceso ˙⋆✮

Se utilizaron:
- `private`
- `protected`
- `public`

para controlar el acceso a atributos y métodos.

---

## Ejecución del programa ⚙️

Para ejecutar el proyecto:

1. Abrir el proyecto en Dev-C++, CodeBlocks o Visual Studio.
2. Compilar el archivo `main.cpp`.
3. Ejecutar el programa.

El programa mostrará:
- Polimorfismo en canciones.
- Creación de playlists.
- Historial de reproducción.
- Polimorfismo en recomendadores.

---

## Conclusión ✦

Este proyecto permitió aplicar conceptos fundamentales de Programación Orientada a Objetos como herencia, polimorfismo, clases abstractas, encapsulación y sobrecarga de métodos mediante el desarrollo de un sistema de recomendación musical inspirado en plataformas de streaming.

---

## Estructura del proyecto .𖥔 ݁ ˖

```txt
main.cpp
Cancion.h / Cancion.cpp
CancionRock.h / CancionRock.cpp
CancionPop.h / CancionPop.cpp
CancionIndie.h / CancionIndie.cpp
CancionMetal.h / CancionMetal.cpp
Playlist.h / Playlist.cpp
Usuario.h / Usuario.cpp
Historial.h / Historial.cpp
Recomendador.h / Recomendador.cpp
RecomendadorMood.h / RecomendadorMood.cpp
RecomendadorGenero.h / RecomendadorGenero.cpp
RecomendadorEnergia.h / RecomendadorEnergia.cpp
Biblioteca.h / Biblioteca.cpp
```


