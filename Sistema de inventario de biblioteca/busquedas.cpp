/**
 * @file biblioteca.cpp
 * @brief Implementación de un sistema básico de búsqueda en una biblioteca.
 *
 * Este archivo contiene la implementación de la clase Biblioteca, que permite
 * buscar libros por título y usuarios por ID. También incluye un menú interactivo
 * para acceder a estas funcionalidades.
 *
 * @dependencies:
 * - Ninguna externa. Utiliza STL (`vector`, `string`) y `iostream`.
 */

/**
 * @struct Libro
 * @brief Representa un libro en la biblioteca.
 *
 * @param titulo Título del libro.
 * @param autor Autor del libro.
 */
struct Libro {
    string titulo;
    string autor;
};

/**
 * @struct Usuario
 * @brief Representa un usuario registrado en la biblioteca.
 *
 * @param nombre Nombre del usuario.
 * @param id Identificador único del usuario.
 */
struct Usuario {
    string nombre;
    int id;
};

/**
 * @class Biblioteca
 * @brief Clase que encapsula la funcionalidad básica de búsqueda en una biblioteca.
 *
 * La clase Biblioteca contiene listas de libros y usuarios, y permite buscar
 * elementos específicos basándose en el título del libro o el ID del usuario.
 */

/**
 * @brief Constructor que inicializa la biblioteca con datos de ejemplo.
 *
 * Agrega una lista predefinida de libros y usuarios al sistema.
 */
 // Biblioteca();

 /**
 * @brief Busca un libro por su título en la biblioteca.
 *
 * Solicita al usuario que ingrese un título. Si el libro existe, muestra
 * su información; de lo contrario, informa que no fue encontrado.
 */
void buscarLibro();

/**
 * @brief Busca un usuario por su ID en la biblioteca.
 *
 * Solicita al usuario que ingrese un ID. Si el usuario existe, muestra
 * su información; de lo contrario, informa que no fue encontrado.
 */
void buscarUsuario();

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

       // Solicita el título del libro al usuario 

        string tituloBuscado;
        cout << "Ingrese el título del libro a buscar: ";
        cin.ignore(); // Para limpiar el buffer
        getline(cin, tituloBuscado);
        
        // Busca el libro en la lista
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