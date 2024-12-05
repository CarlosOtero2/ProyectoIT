/**
 * @file menu.cpp
 * @brief Implementación de funciones para manejar el menú y mostrar libros.
 *
 * Este archivo contiene funciones que gestionan el menú principal del sistema,
 * muestran la lista de libros y permiten abrir archivos PDF mediante comandos del sistema.
 *
 * @dependencies:
 * - menu.h: Declaraciones de las funciones implementadas aquí.
 * - prestamos.h: Para acceder a la estructura `Libro`.
 */

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


#include "menu.h" 
#include "prestamos.h"  
#include <iostream>
#include <cstdlib>

using namespace std;

void mostrarMenu() {
    cout << "==========================" << endl;
    cout << "     Sistema de Biblioteca" << endl;
    cout << "==========================" << endl;
    cout << "1. Ver libros" << endl;
    cout << "2. Prestar libro" << endl;
    cout << "3. Devolver libro" << endl;
    cout << "4. Salir" << endl;
    cout << "==========================" << endl;
}

void mostrarLibros(const Libro libros[], int cantidad) {
    cout << "Lista de libros disponibles:" << endl;
    cout << "=============================" << endl;

    for (int i = 0; i < cantidad; i++) {
        cout << "ID: " << libros[i].id
             << " | Título: " << libros[i].titulo
             << " | Estado: " << (libros[i].disponible ? "Disponible" : "Prestado") << endl;
    }
    cout << "=============================" << endl;
}

void abrirPDF(const std::string& ruta_pdf) {
    if (system(("start " + ruta_pdf).c_str()) != 0) {
        cout << "No se pudo abrir el archivo PDF: " << ruta_pdf << endl;
    }
}