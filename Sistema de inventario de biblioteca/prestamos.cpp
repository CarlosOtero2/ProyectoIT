#include "prestamos.h"
#include "menu.h"
#include <iostream>

using namespace std;

void prestarLibro(Libro libros[], int cantidadLibros, Usuario usuarios[], int cantidadUsuarios) {
    int idLibro, idUsuario;
    cout << "Ingrese el ID del libro a prestar: ";
    cin >> idLibro;
    cout << "Ingrese el ID del usuario: ";
    cin >> idUsuario;

    for (int i = 0; i < cantidadLibros; ++i) {
        if (libros[i].id == idLibro && libros[i].disponible) {
            for (int j = 0; j < cantidadUsuarios; ++j) {
                if (usuarios[j].id == idUsuario && usuarios[j].libroPrestadoId == -1) {
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
    cout << "Ingrese el ID del usuario: ";
    cin >> idUsuario;

    for (int i = 0; i < cantidadUsuarios; ++i) {
        if (usuarios[i].id == idUsuario && usuarios[i].libroPrestadoId != -1) {
            int idLibro = usuarios[i].libroPrestadoId;
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
