#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include "menu.h"
#include "visualizacion.h"
#include "prestamos.h" // Incluimos el archivo de préstamos
#include "biblioteca.h" // Incluimos el archivo de biblioteca

using namespace std;

int main() {
    // Configuración regional y color de consola
    SetConsoleOutputCP(CP_UTF8);
    system("color f1");

    // Crear una instancia de la biblioteca
    Biblioteca biblioteca;

    int opcion; // Para manejar las opciones del menú

    // Ciclo principal del menú
    do {
        // Mostrar opciones
        cout << "======= Sistema de Biblioteca =======" << endl;
        cout << "1. Mostrar Libros" << endl;
        cout << "2. Mostrar Usuarios" << endl;
        cout << "3. Prestar un Libro" << endl;
        cout << "4. Devolver un Libro" << endl;
        cout << "5. Salir" << endl;
        cout << "=====================================" << endl;
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                biblioteca.mostrarLibros();
                break;
            case 2:
                biblioteca.mostrarUsuarios();
                break;
            case 3:
                biblioteca.prestarLibro();
                break;
            case 4:
                biblioteca.devolverLibro();
                break;
            case 5:
                cout << "Saliendo del sistema..." << endl;
                break;
            default:
                cout << "Opción inválida. Inténtalo de nuevo." << endl;
        }
    } while (opcion != 5);

    return 0;
}