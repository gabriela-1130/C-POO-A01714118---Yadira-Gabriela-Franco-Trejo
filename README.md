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

## Consideraciones y casos que harían que el proyecto deje de funcionar

El programa está diseñado para ejecutarse en consola usando C++ estándar.

Casos que podrían causar errores o comportamiento incorrecto:

- Si se elimina alguna clase hija obligatoria, como `CancionRock`, `CancionPop`, `CancionIndie`, `CancionMetal`, `RecomendadorMood`, `RecomendadorGenero` o `RecomendadorEnergia`, el programa puede dejar de compilar porque el `main.cpp` crea objetos de esas clases.

- Si una clase hija no implementa los métodos virtuales puros heredados de una clase abstracta, no se podrán crear objetos de esa clase.

- Si se intenta crear directamente un objeto de una clase abstracta como `Cancion` o `Recomendador`, el programa no compilará.

- Si se pasa un puntero nulo a métodos como `agregarCancion(Cancion* c)` o `escucharCancion(Cancion* cancion)`, el programa podría fallar al intentar acceder a métodos de una canción inexistente.

- Si no se incluyen correctamente los archivos `.h` y `.cpp`, el programa puede marcar errores de compilación.

- Si se compilan todos los archivos `.cpp` por separado además de incluirlos dentro de `main.cpp`, pueden aparecer errores por definiciones duplicadas.

- Si se cambian los nombres de archivos o clases sin actualizar los `#include`, el programa no compilará.

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

Estas clases definen métodos virtuales puros que deben ser implementados por las clases hijas. Esto permite definir un comportamiento general para las canciones y recomendadores, favoreciendo la reutilización de código y el polimorfismo.

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

Estos métodos tienen el mismo nombre, pero reciben parámetros diferentes. Esto permite agregar una sola canción o varias canciones utilizando el mismo método.

La clase `Historial` también implementa sobrecarga mediante:

```cpp
guardarReproduccion()
guardarReproduccion(Cancion* cancion)
```

En este caso, ambos métodos comparten el mismo nombre, pero uno no recibe parámetros y el otro recibe un objeto de tipo `Cancion`. Esto permite realizar distintas acciones dependiendo de la información proporcionada al método.

---

### Encapsulación ｡𖦹°‧

La encapsulación se implementó mediante atributos privados y protegidos, así como el uso de getters y setters para controlar el acceso a la información de las clases.

Ejemplos:

```cpp
string getTitulo();
void setTitulo(string titulo);
```

Esto permite proteger los datos internos de los objetos y acceder a ellos de forma controlada.

---

### Modificadores de acceso ˙⋆✮

Se utilizaron:
- `private`
- `protected`
- `public`

para controlar el acceso a atributos y métodos.

---

## Ejecución del programa 𝄞⨾𓍢ִ໋

Para ejecutar el proyecto:

1. Abrir el proyecto en Dev-C++, CodeBlocks o Visual Studio.
2. Compilar el archivo `main.cpp`.
3. Ejecutar el programa.

### Compilación

El proyecto corre en consola y está hecho en C++ estándar.

Compilar con:

```bash
g++ main.cpp
```

Ejecutar en Linux/Mac:

```bash
./a.out
```

Ejecutar en Windows:

```bash
a.exe
```

El programa mostrará:

* Polimorfismo en canciones.
* Creación de playlists.
* Historial de reproducción.
* Polimorfismo en recomendadores.

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


