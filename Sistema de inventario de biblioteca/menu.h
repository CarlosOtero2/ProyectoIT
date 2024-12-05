#ifndef MENU_H
#define MENU_H

#include "prestamos.h" // Incluye solo prestamos.h para acceder a Libro

void mostrarMenu();
void mostrarLibros(const Libro libros[], int cantidad);
void abrirPDF(const std::string& ruta_pdf);

#endif // MENU_H