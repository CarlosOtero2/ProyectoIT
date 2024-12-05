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