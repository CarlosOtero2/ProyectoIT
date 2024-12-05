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
        Libro nuevoLibro;
        cout << "Ingrese el título del libro: ";
        cin.ignore(); // Para limpiar el buffer
        getline(cin, nuevoLibro.titulo);
        cout << "Ingrese el autor del libro: ";
        getline(cin, nuevoLibro.autor);
        libros.push_back(nuevoLibro);
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