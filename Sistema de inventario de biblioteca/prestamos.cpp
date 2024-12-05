/**
 * @file prestamos.cpp
 * @brief Implementación de funciones para gestionar préstamos y devoluciones.
 *
 * Este archivo contiene las funciones necesarias para realizar operaciones
 * relacionadas con el préstamo y devolución de libros en la biblioteca.
 *
 * @dependencies:
 * - prestamos.h: Declaraciones de estructuras y funciones.
 * - menu.h: Opcional, si se usa para menús interactivos adicionales.
 */

/**
 * @brief Permite asignar un libro disponible a un usuario.
 *
 * Verifica que el libro esté disponible y que el usuario no tenga ya un libro
 * prestado. Si se cumplen ambas condiciones, actualiza el estado del libro y
 * del usuario para reflejar el préstamo.
 *
 * @param libros Arreglo de libros disponibles en la biblioteca.
 * @param cantidadLibros Número total de libros en el arreglo.
 * @param usuarios Arreglo de usuarios registrados en la biblioteca.
 * @param cantidadUsuarios Número total de usuarios en el arreglo.
 */

/**
 * @brief Permite devolver un libro prestado por un usuario.
 *
 * Verifica que el usuario tenga un libro prestado. Si es así, actualiza el
 * estado del libro a disponible y elimina el préstamo del usuario.
 *
 * @param libros Arreglo de libros disponibles en la biblioteca.
 * @param cantidadLibros Número total de libros en el arreglo.
 * @param usuarios Arreglo de usuarios registrados en la biblioteca.
 * @param cantidadUsuarios Número total de usuarios en el arreglo.
 */

#include "prestamos.h"
#include "menu.h"
#include <iostream>

using namespace std;

 // Solicitamos el ID del libro y del usuario

void prestarLibro(Libro libros[], int cantidadLibros, Usuario usuarios[], int cantidadUsuarios) {
    int idLibro, idUsuario;
    cout << "Ingrese el ID del libro a prestar: ";
    cin >> idLibro;
    cout << "Ingrese el ID del usuario: ";
    cin >> idUsuario;

   // Valida que el libro existe o está disponible

    for (int i = 0; i < cantidadLibros; ++i) {
        if (libros[i].id == idLibro && libros[i].disponible) {

            // Valida que el usuario pueda tomar el libro
            for (int j = 0; j < cantidadUsuarios; ++j) {
                if (usuarios[j].id == idUsuario && usuarios[j].libroPrestadoId == -1) {

                    // Realiza el prestamo
                    libros[i].disponible = false;
                    usuarios[j].libroPrestadoId = idLibro;
                    cout << "Libro prestado exitosamente." << endl;
                    return;
                }
            }
            cout << "El usuario no puede tomar más libros." << endl;
            return;
        }
    }
    cout << "El libro no está disponible o el ID es incorrecto." << endl;
}

void devolverLibro(Libro libros[], int cantidadLibros, Usuario usuarios[], int cantidadUsuarios) {
    int idUsuario;

    // Solicita el ID del usuario
    cout << "Ingrese el ID del usuario: ";
    cin >> idUsuario;

    // Valida que el usuario tiene el prestamo 
    for (int i = 0; i < cantidadUsuarios; ++i) {
        if (usuarios[i].id == idUsuario && usuarios[i].libroPrestadoId != -1) {
            int idLibro = usuarios[i].libroPrestadoId;

            // Buscar el libro actual y actualiza su estado
            for (int j = 0; j < cantidadLibros; ++j) {
                if (libros[j].id == idLibro) {
                    libros[j].disponible = true;
                    usuarios[i].libroPrestadoId = -1;
                    cout << "Libro devuelto exitosamente." << endl;
                    return;
                }
            }
        }
    }
    cout << "No hay libros prestados para este usuario o el ID es incorrecto." << endl;
}
