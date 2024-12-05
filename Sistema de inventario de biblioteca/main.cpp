/**
 * @file main.cpp
 * @brief Punto de entrada del programa de inventario de biblioteca.
 *
 * Este archivo implementa el menú principal del sistema y coordina
 * las funciones principales como mostrar libros, gestionar usuarios,
 * y realizar préstamos y devoluciones. Utiliza la clase `Biblioteca`
 * como núcleo del sistema.
 *
 * @dependencies:
 * - menu.h
 * - visualizacion.h
 * - prestamos.h
 * - biblioteca.h
 */

/**
 /**
 * @brief Función principal del sistema de biblioteca.
 *
 * Proporciona un menú interactivo para acceder a las funcionalidades de la clase
 * Biblioteca, como registrar y buscar libros o usuarios.
 *
 * @return int Código de salida del programa (0 para éxito).
 */

#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include "menu.h"
#include "visualizacion.h"
#include "prestamos.h" 
#include "biblioteca.h" 

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
            case 1: // llama al método para mostrar libros
                biblioteca.mostrarLibros();
                break;
            case 2: // llama el método para llamr usuarios
                biblioteca.mostrarUsuarios();
                break;
            case 3: // Gestiona los prestamos
                biblioteca.prestarLibro();
                break;
            case 4: // Gestiona las devoluciones 
                biblioteca.devolverLibro();
                break;
            case 5: // Sale el programa
                cout << "Saliendo del sistema..." << endl;
                break;
            default:
                cout << "Opción inválida. Inténtalo de nuevo." << endl;
        }
    } while (opcion != 5);

    return 0;
}