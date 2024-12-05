/**
 * @file biblioteca.cpp
 * @brief Implementación de la clase Biblioteca y su menú de interacción.
 *
 * Este archivo contiene la implementación de la clase Biblioteca, que gestiona
 * el registro y búsqueda de libros y usuarios. Además, incluye un menú interactivo
 * para permitir al usuario interactuar con estas funcionalidades.
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
 * @brief Clase que gestiona los registros y búsquedas en la biblioteca.
 *
 * La clase Biblioteca encapsula la lista de libros y usuarios registrados.
 * Proporciona métodos para registrar nuevos elementos y buscar información
 * existente.
 */

/**
 * @brief Registra un nuevo libro en la biblioteca.
 *
 * Solicita al usuario el título y autor del libro y lo agrega a la lista de
 * libros registrados.
 */
void registrarLibro();

/**
 * @brief Registra un nuevo usuario en la biblioteca.
 *
 * Solicita al usuario el nombre y un identificador único, y lo agrega a la
 * lista de usuarios registrados.
 */
void registrarUsuario();

/**
 * @brief Busca un libro por su título en la biblioteca.
 *
 * Solicita al usuario el título del libro a buscar. Si el libro existe,
 * muestra su información; de lo contrario, informa que no fue encontrado.
 */
void buscarLibro();

/**
 * @brief Busca un usuario por su ID en la biblioteca.
 *
 * Solicita al usuario el ID del usuario a buscar. Si el usuario existe,
 * muestra su información; de lo contrario, informa que no fue encontrado.
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
    void registrarLibro() {

        // Crear un nuevo libro

        Libro nuevoLibro;

       // Solicitamos datos al usuario 

        cout << "Ingrese el título del libro: ";
        cin.ignore(); // Para limpiar el buffer
        getline(cin, nuevoLibro.titulo);
        cout << "Ingrese el autor del libro: ";
        getline(cin, nuevoLibro.autor);

        // Agregar el libro a la lista 

        libros.push_back(nuevoLibro);

        // Confirmación del registro del libro  

        cout << "Libro registrado con éxito.\n";
    }

    void registrarUsuario() {
        Usuario nuevoUsuario;
        cout << "Ingrese el nombre del usuario: ";
        cin.ignore(); // Para limpiar el buffer
        getline(cin, nuevoUsuario.nombre);
        cout << "Ingrese el ID del usuario: ";
        cin >> nuevoUsuario.id;
        usuarios.push_back(nuevoUsuario);
        cout << "Usuario registrado con éxito.\n";
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
        cout << "\n--- Menú de Biblioteca ---\n";
        cout << "1. Registrar Libro\n";
        cout << "2. Registrar Usuario\n";
        cout << "3. Buscar Libro\n";
        cout << "4. Buscar Usuario\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                biblioteca.registrarLibro();
                break;
            case 2:
                biblioteca.registrarUsuario();
                break;
            case 3:
                biblioteca.buscarLibro();
                break;
            case 4:
                biblioteca.buscarUsuario();
                break;
            case 5:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while (opcion != 5);

    return 0;
}