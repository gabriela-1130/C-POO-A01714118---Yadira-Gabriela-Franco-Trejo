# Proyecto Integrador POO
##Yadira Gabriela Franco Trejo A01714118
### Sistema de Recomendación Musical

Autor:  
Yadira Gabriela Franco Trejo  
A01714118

---

## Descripción

Este proyecto consiste en un sistema de recomendación musical inspirado en plataformas de streaming como Spotify.

El sistema permite:
- crear canciones de distintos géneros
- crear playlists
- recomendar playlists según mood, género o energía
- guardar historial de reproducción
- demostrar conceptos de Programación Orientada a Objetos

---

## Conceptos de POO implementados

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

### Sobreescritura (Override)

Las clases hijas sobrescriben métodos como:

```cpp
mostrarInfo()
reproducir()
generarPlaylist()
```

permitiendo comportamiento distinto según el objeto.

---

### Sobrecarga (Overload)

La clase `Playlist` implementa sobrecarga en:

```cpp
agregarCancion(Cancion* c)
agregarCancion(vector<Cancion*> canciones)
```

---

### Modificadores de acceso

Se utilizaron:
- `private`
- `protected`
- `public`

para controlar el acceso a atributos y métodos.

---

## Estructura del proyecto

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

---

## Compilación

```bash
g++ main.cpp -o proyecto
```

---

## Ejecución

```bash
./proyecto
```
