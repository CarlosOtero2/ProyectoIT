/**
 * @file biblioteca.h
 * @brief Declaración de la clase Biblioteca.
 *
 * La clase Biblioteca encapsula la lógica principal del sistema de inventario
 * de biblioteca. Maneja la lista de libros y usuarios, y ofrece métodos
 * para realizar operaciones como mostrar libros, gestionar préstamos y devoluciones.
 *
 * @dependencies:
 * - prestamos.h: Para las estructuras Libro y Usuario.
 */

/**
 * @class Biblioteca
 * @brief Clase central del sistema de biblioteca.
 *
 * La clase Biblioteca encapsula las listas de libros y usuarios, 
 * y proporciona métodos para gestionar las operaciones principales 
 * del sistema, como mostrar libros, registrar préstamos y devoluciones.
 */

#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "prestamos.h"
#include <vector>

class Biblioteca {
private:
    std::vector<Libro> libros;
    std::vector<Usuario> usuarios;

public:
    Biblioteca();  // Constructor
    void mostrarLibros();   // Muestra los libros
    void mostrarUsuarios(); // Muestrar los usuarios
    void prestarLibro();    // Presta los libros
    void devolverLibro();   // Devuelve los libros prestados
};

#endif // BIBLIOTECA_H