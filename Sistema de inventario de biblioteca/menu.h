/**
 * @file menu.h
 * @brief Declaraciones de funciones para manejar el menú principal y mostrar libros.
 *
 * Este archivo contiene las declaraciones de funciones utilizadas para manejar
 * el menú principal del sistema, mostrar libros registrados en la biblioteca,
 * y abrir archivos PDF.
 *
 * @dependencies:
 * - prestamos.h: Para acceder a la estructura `Libro`.
 */

#ifndef MENU_H
#define MENU_H

#include "prestamos.h" // Incluye solo prestamos.h para acceder a Libro

void mostrarMenu();
void mostrarLibros(const Libro libros[], int cantidad);
void abrirPDF(const std::string& ruta_pdf);

#endif // MENU_H

/**
 * @brief Muestra el menú principal del sistema de biblioteca.
 *
 * Presenta al usuario las opciones principales del sistema, incluyendo
 * ver libros, prestar libros, devolver libros y salir del sistema.
 */
void mostrarMenu();

/**
 * @brief Muestra la lista de libros disponibles en la biblioteca.
 *
 * Itera sobre un arreglo de libros y muestra el ID, título y estado
 * (disponible o prestado) de cada libro.
 *
 * @param libros Arreglo de libros registrados en la biblioteca.
 * @param cantidad Número de libros en el arreglo.
 */
void mostrarLibros(const Libro libros[], int cantidad);

/**
 * @brief Abre un archivo PDF desde la ruta especificada.
 *
 * Utiliza un comando del sistema para intentar abrir un archivo PDF.
 * Si falla, muestra un mensaje de error.
 *
 * @param ruta_pdf Ruta del archivo PDF a abrir.
 */
void abrirPDF(const std::string& ruta_pdf);