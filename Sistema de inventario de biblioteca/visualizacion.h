/**
 * @file visualizacion.h
 * @brief Declaraciones de estructuras y funciones para la visualización y búsqueda de datos.
 *
 * Este archivo contiene la declaración de la estructura `LibroVisualizacion` y
 * funciones para manejar la visualización y búsqueda de libros y usuarios en el
 * sistema de biblioteca.
 */

/**
 * @struct LibroVisualizacion
 * @brief Representa los detalles de un libro que se mostrarán al usuario.
 *
 * Contiene información extendida sobre un libro, como su título, autor, año de
 * publicación, país e idioma.
 *
 * @param titulo Título del libro.
 * @param autor Autor del libro.
 * @param anio Año de publicación del libro.
 * @param pais País de origen del libro.
 * @param idioma Idioma en el que está escrito el libro.
 */
struct LibroVisualizacion {
    std::string titulo;
    std::string autor;
    int anio;
    std::string pais;
    std::string idioma;
};

/**
 * @brief Muestra una lista detallada de los libros disponibles.
 *
 * Recorre un vector de libros y muestra la información detallada de cada libro,
 * incluyendo título, autor, año de publicación, país e idioma.
 *
 * @param libros Vector de libros registrados en el sistema.
 */
void mostrarLibros(const std::vector<LibroVisualizacion>& libros);

/**
 * @brief Muestra una lista de usuarios registrados.
 *
 * Recorre un vector de nombres de usuarios y los muestra en formato de lista.
 *
 * @param usuarios Vector de nombres de usuarios registrados.
 */
void mostrarUsuarios(const std::vector<std::string>& usuarios);

/**
 * @brief Muestra una lista de usuarios registrados.
 *
 * Recorre un vector de nombres de usuarios y los muestra en formato de lista.
 *
 * @param usuarios Vector de nombres de usuarios registrados.
 */
void mostrarUsuarios(const std::vector<std::string>& usuarios);

/**
 * @brief Busca un usuario en el sistema basado en un término de búsqueda.
 *
 * Recorre un vector de nombres de usuarios y busca coincidencias parciales o
 * exactas con el término ingresado. Si encuentra coincidencias, muestra los
 * resultados.
 *
 * @param usuarios Vector de nombres de usuarios registrados.
 * @param busqueda Término de búsqueda para encontrar el usuario.
 */
void buscarUsuario(const std::vector<std::string>& usuarios, const std::string& busqueda);

#ifndef VISUALIZACION_H
#define VISUALIZACION_H

#include <vector>
#include <string>

// Estructura para representar un libro visual (información para mostrar)
struct LibroVisualizacion {
    std::string titulo;
    std::string autor;
    int anio;
    std::string pais;
    std::string idioma;
};

// Funciones para visualización y búsqueda
void mostrarLibros(const std::vector<LibroVisualizacion>& libros);
void mostrarUsuarios(const std::vector<std::string>& usuarios);
void buscarLibro(const std::vector<LibroVisualizacion>& libros, const std::string& busqueda);
void buscarUsuario(const std::vector<std::string>& usuarios, const std::string& busqueda);

#endif // VISUALIZACION_H
