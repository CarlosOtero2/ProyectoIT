#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Libro {
    string titulo;
    string autor;
};

struct Usuario {
    string nombre;
    int id;
};

class Biblioteca {
private:
    vector<Libro> libros;
    vector<Usuario> usuarios;

public:
    // Constructor para inicializar algunos libros y usuarios
    Biblioteca() {
        // Agregar algunos libros de ejemplo
        libros.push_back({"Cien años de soledad", "Gabriel García Márquez"});
        libros.push_back({"Don Quijote de la Mancha", "Miguel de Cervantes"});
        libros.push_back({"El Principito", "Antoine de Saint-Exupéry"});

        // Agregar algunos usuarios de ejemplo
        usuarios.push_back({"Juan Pérez", 1});
        usuarios.push_back({"María López", 2});
        usuarios.push_back({"Carlos García", 3});
    }

    void buscarLibro() {
        string tituloBuscado;
        cout << "Ingrese el título del libro a buscar: ";
        cin.ignore(); // Para limpiar el buffer
        getline(cin, tituloBuscado);
        
        for (const auto& libro : libros) {
            if (libro.titulo == tituloBuscado) {
                cout << "Libro encontrado: " << libro.titulo << " por " << libro.autor << endl;
                return;
            }
        }
        cout << "Libro no encontrado.\n";
    }

    void buscarUsuario() {
        int idBuscado;
        cout << "Ingrese el ID del usuario a buscar: ";
        cin >> idBuscado;

        for (const auto& usuario : usuarios) {
            if (usuario.id == idBuscado) {
                cout << "Usuario encontrado: " << usuario.nombre << " (ID: " << usuario.id << ")\n";
                return;
            }
        }
        cout << "Usuario no encontrado.\n";
    }
};

int main() {
    Biblioteca biblioteca;
    int opcion;

    do {
        cout << "\n--- Menú de Búsqueda ---\n";
        cout << "1. Buscar Libro\n";
        cout << "2. Buscar Usuario\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                biblioteca.buscarLibro();
                break;
            case 2:
                biblioteca.buscarUsuario();
                break;
            case 3:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while (opcion != 3);

    return 0;
}