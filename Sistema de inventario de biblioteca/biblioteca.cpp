/**
 * @file biblioteca.cpp
 * @brief Implementación de la clase Biblioteca.
 *
 * Este archivo contiene las implementaciones de la clase Biblioteca, que
 * incluye las funcionalidades para mostrar libros y usuarios, y gestionar
 * los préstamos y devoluciones en el sistema de biblioteca.
 *
 * @dependencies:
 * - biblioteca.h: Declaraciones de la clase Biblioteca.
 */

/**
 * @brief Constructor de la clase Biblioteca.
 *
 * Inicializa las listas de libros y usuarios con datos de ejemplo.
 */
  // Biblioteca::Biblioteca();

/**

/**
 * @brief Muestra la lista de usuarios registrados en la biblioteca.
 *
 * Recorre el vector de usuarios y muestra el ID, nombre y el ID del
 * libro que tienen prestado (o indica "Ninguno" si no tienen libros prestados).
 */
  // void Biblioteca::mostrarUsuarios();

 /**
 * @brief Gestiona el préstamo de un libro a un usuario.
 *
 * Solicita al usuario el ID del libro y el ID del usuario. Si el libro
 * está disponible y el usuario puede tomarlo, actualiza el estado del
 * libro y del usuario para reflejar el préstamo.
 *
 * @note El libro debe estar disponible y el usuario no debe tener libros
 *       prestados actualmente.
 */
  // void Biblioteca::prestarLibro();

/**
 * @brief Gestiona la devolución de un libro por parte de un usuario.
 *
 * Solicita al usuario su ID. Si el usuario tiene un libro prestado, actualiza
 * el estado del libro y del usuario para reflejar la devolución.
 *
 * @note El usuario debe tener un libro prestado para completar la devolución.
 */
  // void Biblioteca::devolverLibro();  

#include "biblioteca.h"
#include <iostream>

using namespace std;

// Implementación del constructor
Biblioteca::Biblioteca() {
    // Inicialización de libros y usuarios
    libros = {
        {1, "El Principito", true},
        {2, "1984", true},
        {3, "El Hobbit", true},
        {4, "Orgullo y Prejuicio", true}
    };
    usuarios = {
        {1, "Carlos Otero", -1},
        {2, "Pedro Quintero", -1},
        {3, "Alvin Tapia", -1},
        {4, "Debora Cisnero", -1}
    };
}

// Implementación de los métodos de la clase Biblioteca
void Biblioteca::mostrarLibros() {
    cout << "Lista de libros:" << endl;
    for (const auto& libro : libros) {
        cout << "ID: " << libro.id << " | Título: " << libro.titulo
             << " | Estado: " << (libro.disponible ? "Disponible" : "Prestado") << endl;
    }
}

void Biblioteca::mostrarUsuarios() {
    cout << "Lista de usuarios:" << endl;
    for (const auto& usuario : usuarios) {
        cout << "ID: " << usuario.id << " | Nombre: " << usuario.nombre
             << " | Libro Prestado: " << (usuario.libroPrestadoId == -1 ? "Ninguno" : to_string(usuario.libroPrestadoId)) << endl;
    }
}

void Biblioteca::prestarLibro() {
    int idLibro, idUsuario;
    cout << "Ingrese el ID del libro a prestar: ";
    cin >> idLibro;
    cout << "Ingrese el ID del usuario: ";
    cin >> idUsuario;

    for (auto& libro : libros) {
        if (libro.id == idLibro && libro.disponible) {
            for (auto& usuario : usuarios) {
                if (usuario.id == idUsuario && usuario.libroPrestadoId == -1) {
                    libro.disponible = false;
                    usuario.libroPrestadoId = idLibro;
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

void Biblioteca::devolverLibro() {
    int idUsuario;
    cout << "Ingrese el ID del usuario: ";
    cin >> idUsuario;

    for (auto& usuario : usuarios) {
        if (usuario.id == idUsuario && usuario.libroPrestadoId != -1) {
            int idLibro = usuario.libroPrestadoId;
            for (auto& libro : libros) {
                if (libro.id == idLibro) {
                    libro.disponible = true;
                    usuario.libroPrestadoId = -1;
                    cout << "Libro devuelto exitosamente." << endl;
                    return;
                }
            }
        }
    }
    cout << "No hay libros prestados para este usuario o el ID es incorrecto." << endl;
}