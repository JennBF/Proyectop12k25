#include "InventarioLogis.h"
#include <iostream>

//Karina Alejandra Arriaza Ortiz 02/05/2025

using namespace std;

extern usuarios usuarioRegistrado;
extern bitacora auditoria;

void Inventario::controlInventario() {
    int opcion;
    do {
        system("cls");
        cout << "\t\t========================================" << endl;
        cout << "\t\t| CONTROL DE INVENTARIO - LOGISTICA     |" << endl;
        cout << "\t\t========================================" << endl;
        cout << "\t\t 1. Consultar stock" << endl;
        cout << "\t\t 2. Registrar mercancia" << endl;
        cout << "\t\t 3. Ajustar inventario" << endl;
        cout << "\t\t 4. Reporte de existencias" << endl;
        cout << "\t\t 5. Volver al menu anterior" << endl;
        cout << "\t\t========================================" << endl;
        cout << "\t\tOpcion a escoger: ";
        cin >> opcion;

        switch(opcion) {
            case 1: consultarStock(); break;
            case 2: registrarMercancia(); break;
            case 3: ajustarInventario(); break;
            case 4: reporteExistencias(); break;
            case 5: break;
            default: cout << "\n\t\tOpcion invalida!"; cin.get();
        }
    } while(opcion != 5);
}

void Inventario::consultarStock() {
    cout << "\n\t\t[Consultando stock...]" << endl;
    auditoria.insertar(usuarioRegistrado.getNombre(), "200", "STOCK");
    system("pause");
}

void Inventario::registrarMercancia() {
    string nombreMercancia;
    int cantidad;

    cout << "\n\t\t[Registrar Mercancia]" << endl;
    cout << "\t\tIngrese el nombre de la mercancia: ";
    cin >> nombreMercancia;
    cout << "\t\tIngrese la cantidad: ";
    cin >> cantidad;

    // Aquí deberías agregar la lógica para registrar la mercancia en tu sistema
    cout << "\t\tMercancia '" << nombreMercancia << "' registrada con cantidad: " << cantidad << endl;
    auditoria.insertar(usuarioRegistrado.getNombre(), "Registro de mercancia: " + nombreMercancia + " - Cantidad: " + to_string(cantidad), "REGISTRO");
    system("pause");
}

void Inventario::ajustarInventario() {
    string nombreMercancia;
    int nuevaCantidad;

    cout << "\n\t\t[Ajustar Inventario]" << endl;
    cout << "\t\tIngrese el nombre de la mercancia: ";
    cin >> nombreMercancia;
    cout << "\t\tIngrese la nueva cantidad: ";
    cin >> nuevaCantidad;

    // Aquí deberías agregar la lógica para ajustar la cantidad de la mercancia en tu sistema
    cout << "\t\tInventario ajustado para '" << nombreMercancia << "' a la nueva cantidad: " << nuevaCantidad << endl;
    auditoria.insertar(usuarioRegistrado.getNombre(), "Ajuste de inventario: " + nombreMercancia + " - Nueva cantidad: " + to_string(nuevaCantidad), "AJUSTE");
    system("pause");
}

void Inventario::reporteExistencias() {
    cout << "\n\t\t[Generando reporte de existencias...]" << endl;
    // Aquí deberías agregar la lógica para generar y mostrar el reporte de existencias
    auditoria.insertar(usuarioRegistrado.getNombre(), "Generación de reporte de existencias", "REPORTE");
    system("pause");
}
