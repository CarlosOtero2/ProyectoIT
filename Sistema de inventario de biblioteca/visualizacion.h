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
