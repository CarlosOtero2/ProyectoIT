/**
 * @file prestamos.h
 * @brief Declaraciones para la gestión de préstamos y devoluciones de libros.
 *
 * Este archivo define las estructuras básicas (`Libro` y `Usuario`) y declara
 * las funciones necesarias para realizar préstamos y devoluciones de libros
 * en el sistema de biblioteca.
 */

/**
 * @struct Libro
 * @brief Representa un libro en la biblioteca.
 *
 * @param id Identificador único del libro.
 * @param titulo Título del libro.
 * @param disponible Indica si el libro está disponible para préstamo.
 */

/**
 * @struct Usuario
 * @brief Representa un usuario registrado en la biblioteca.
 *
 * @param id Identificador único del usuario.
 * @param nombre Nombre del usuario.
 * @param libroPrestadoId ID del libro que tiene prestado, o -1 si no tiene ninguno.
 */
struct Usuario {
    int id;
    std::string nombre;
    int libroPrestadoId; // -1 significa que no tiene ningún libro prestado
};

/**
 * @brief Asigna un libro disponible a un usuario registrado.
 *
 * La función verifica que el libro esté disponible y que el usuario no tenga
 * ya un libro prestado. Si ambas condiciones se cumplen, se realiza el préstamo.
 *
 * @param libros Arreglo de libros disponibles en la biblioteca.
 * @param cantidadLibros Número total de libros en el arreglo.
 * @param usuarios Arreglo de usuarios registrados en la biblioteca.
 * @param cantidadUsuarios Número total de usuarios en el arreglo.
 */
void prestarLibro(Libro libros[], int cantidadLibros, Usuario usuarios[], int cantidadUsuarios);

/**
 * @brief Permite devolver un libro prestado por un usuario.
 *
 * La función verifica que el usuario tenga un libro prestado. Si es así,
 * actualiza el estado del libro a disponible y elimina el préstamo del usuario.
 *
 * @param libros Arreglo de libros disponibles en la biblioteca.
 * @param cantidadLibros Número total de libros en el arreglo.
 * @param usuarios Arreglo de usuarios registrados en la biblioteca.
 * @param cantidadUsuarios Número total de usuarios en el arreglo.
 */
void devolverLibro(Libro libros[], int cantidadLibros, Usuario usuarios[], int cantidadUsuarios);

struct Libro {
    int id;
    std::string titulo;
    bool disponible;
};

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