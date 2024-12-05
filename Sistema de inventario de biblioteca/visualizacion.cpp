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