# Proyecto Integrador POO
### Sistema de Recomendación Musical

Autor:  
Yadira Gabriela Franco Trejo  
A01714118

---

## Descripción ⋆.𐙚 ̊

Este proyecto consiste en un sistema de recomendación musical inspirado en plataformas de streaming como Spotify.

El sistema permite:

* Cargar automáticamente un catálogo de 200 canciones desde un archivo CSV.
* Buscar canciones por título.
* Escuchar canciones y registrar reproducciones.
* Crear y administrar playlists personalizadas.
* Generar recomendaciones musicales mediante distintos criterios.
* Consultar el historial de reproducción.
* Identificar el mood más frecuente del usuario.
* Administrar un perfil de usuario con mood, energía y género favorito.

El sistema implementa conceptos fundamentales de Programación Orientada a Objetos como herencia, polimorfismo, clases abstractas, encapsulación y sobrecarga de métodos.

---

## Consideraciones y casos que harían que el proyecto deje de funcionar ✌︎㋡

El programa está diseñado para ejecutarse en consola usando C++ estándar.

Casos que podrían causar errores o comportamiento incorrecto:

- Si se elimina alguna clase hija obligatoria, como `CancionRock`, `CancionPop`, `CancionIndie`, `CancionMetal`, `RecomendadorMood`, `RecomendadorGenero` o `RecomendadorEnergia`, el programa puede dejar de compilar porque el `main.cpp` crea objetos de esas clases.

- Si una clase hija no implementa los métodos virtuales puros heredados de una clase abstracta, no se podrán crear objetos de esa clase.

- Si se intenta crear directamente un objeto de una clase abstracta como `Cancion` o `Recomendador`, el programa no compilará.

- Si se intenta acceder a una canción inexistente y se eliminan las validaciones implementadas para punteros nulos, podrían producirse errores durante la ejecución.

- Si no se incluyen correctamente los archivos `.h` y `.cpp`, el programa puede marcar errores de compilación.

- Si se compilan todos los archivos `.cpp` por separado además de incluirlos dentro de `main.cpp`, pueden aparecer errores por definiciones duplicadas.

- Si se cambian los nombres de archivos o clases sin actualizar los `#include`, el programa no compilará.

- Si el archivo canciones.csv no se encuentra en la misma carpeta que el ejecutable, el catálogo no podrá cargarse correctamente y las funcionalidades relacionadas con canciones y recomendaciones no funcionarán como se espera.

- Si el formato del archivo canciones.csv es modificado y deja de respetar la estructura: titulo,artista,genero,mood,energia,duracion el programa podría generar errores al intentar convertir los datos o cargar canciones incorrectamente.

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

virtual Playlist generarPlaylist(Biblioteca* biblioteca) = 0;
virtual vector<Cancion*> recomendarCanciones(Biblioteca* biblioteca) = 0;
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
generarPlaylist(Biblioteca*)
recomendarCanciones(Biblioteca*)
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

## Archivo CSV ⋆˚꩜｡

El catálogo musical se almacena en el archivo `canciones.csv`.

Cada registro contiene:

```txt
titulo,artista,genero,mood,energia,duracion
```

Ejemplo:

```txt
505,Arctic Monkeys,Indie,Melancolico,6,4.2
```

Durante la ejecución, la clase `Biblioteca` carga automáticamente las canciones desde este archivo y crea los objetos correspondientes según su género.

---

## Ejecución del programa 𝄞⨾𓍢ִ໋

Para ejecutar el proyecto:

1. Abrir una terminal en la carpeta del proyecto.
2. Compilar el archivo main.cpp utilizando el comando indicado.
3. Ejecutar el programa.

### Compilación ⋆⭒˚.⋆

Compilar con:

```bash
g++ -std=c++17 main.cpp -o musica
```

Ejecutar en Linux/Mac:

```bash
./musica
```

Ejecutar en Windows:

```bash
musica.exe
```

El programa solicitará la creación de un perfil de usuario y luego mostrará un menú interactivo desde el cual será posible:

* Explorar el catálogo musical.
* Buscar canciones.
* Escuchar canciones.
* Crear playlists.
* Consultar historial.
* Generar recomendaciones por mood, género o energía.
* Administrar el perfil del usuario.

---

## Conclusión ✦

Este proyecto me ayudó a aplicar conceptos fundamentales de Programación Orientada a Objetos como herencia, polimorfismo, clases abstractas, encapsulación y sobrecarga de métodos mediante el desarrollo de un sistema de recomendación musical. Además, se integró lectura de archivos CSV, gestión de perfiles de usuario, administración de playlists, historial de reproducción y generación de recomendaciones musicales basadas en mood, género y energía :).

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
Biblioteca.h / Biblioteca.cpp

Recomendador.h / Recomendador.cpp
RecomendadorMood.h / RecomendadorMood.cpp
RecomendadorGenero.h / RecomendadorGenero.cpp
RecomendadorEnergia.h / RecomendadorEnergia.cpp

canciones.csv

```


