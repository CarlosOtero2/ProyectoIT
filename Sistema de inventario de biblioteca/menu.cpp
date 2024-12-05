#include "menu.h" 
#include "prestamos.h"  
#include <iostream>
#include <cstdlib>

using namespace std;

void mostrarMenu() {
    cout << "==========================" << endl;
    cout << "     Sistema de Biblioteca" << endl;
    cout << "==========================" << endl;
    cout << "1. Ver libros" << endl;
    cout << "2. Prestar libro" << endl;
    cout << "3. Devolver libro" << endl;
    cout << "4. Salir" << endl;
    cout << "==========================" << endl;
}

void mostrarLibros(const Libro libros[], int cantidad) {
    cout << "Lista de libros disponibles:" << endl;
    cout << "=============================" << endl;

    for (int i = 0; i < cantidad; i++) {
        cout << "ID: " << libros[i].id
             << " | Título: " << libros[i].titulo
             << " | Estado: " << (libros[i].disponible ? "Disponible" : "Prestado") << endl;
    }
    cout << "=============================" << endl;
}

void abrirPDF(const std::string& ruta_pdf) {
    if (system(("start " + ruta_pdf).c_str()) != 0) {
        cout << "No se pudo abrir el archivo PDF: " << ruta_pdf << endl;
    }
}