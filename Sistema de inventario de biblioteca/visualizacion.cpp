/**
 * @file visualizacion.cpp
 * @brief Implementación de funciones para la visualización de libros.
 *
 * Este archivo contiene la implementación de funciones que permiten mostrar
 * información detallada de los libros registrados en el sistema de biblioteca.
 *
 * @dependencies:
 * - visualizacion.h: Declara la estructura `LibroVisualizacion` y las funciones relacionadas.
 */

/**
 * @brief Muestra una lista detallada de los libros disponibles.
 *
 * Recorre un vector de libros y muestra información detallada de cada libro,
 * incluyendo título, autor, año, país de publicación e idioma.
 *
 * @param libros Vector de libros registrados en el sistema.
 */
void mostrarLibros(const vector<LibroVisualizacion>& libros);

#include <iostream>
#include "visualizacion.h"

using namespace std;

// Función para mostrar todos los libros disponibles
void mostrarLibros(const vector<LibroVisualizacion>& libros) {
    cout << "Libros disponibles:" << endl;
    
    // Recorrer cada libro en el vector y mostrar sus detalles
    for (const auto& libro : libros) {
        cout << "- Titulo: " << libro.titulo << endl;
        cout << "  Autor: " << libro.autor << endl;
        cout << "  Año: " << libro.anio << endl;
        cout << "  Pais: " << libro.pais << endl;
        cout << "  Idioma: " << libro.idioma << endl;
        cout << endl;
    }
}