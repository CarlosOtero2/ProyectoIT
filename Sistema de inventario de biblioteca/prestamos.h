#ifndef PRESTAMOS_H
#define PRESTAMOS_H

#include <string>

struct Libro {
    int id;
    std::string titulo;
    bool disponible;
};

struct Usuario {
    int id;
    std::string nombre;
    int libroPrestadoId; // -1 significa que no tiene ningún libro prestado
};

// Declaraciones de las funciones relacionadas con préstamos
void prestarLibro(Libro libros[], int cantidadLibros, Usuario usuarios[], int cantidadUsuarios);
void devolverLibro(Libro libros[], int cantidadLibros, Usuario usuarios[], int cantidadUsuarios);

#endif // PRESTAMOS_H
