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
    void mostrarLibros();   // Método para mostrar libros
    void mostrarUsuarios(); // Método para mostrar usuarios
    void prestarLibro();    // Método para prestar libros
    void devolverLibro();   // Método para devolver libros
};

#endif // BIBLIOTECA_H