#include <iostream>
#include "Reportes.h"
#include "Usuarios.h"
#include "Inventario.h"
#include "Facturacion.h"
#include "Bitacora.h"

using namespace std;

int main() {
    int opcion;
    // Crear instancias de los m�dulos
    Reportes reportes;
    Usuarios usuarios;
    Inventario inventario;
    Facturacion facturacion;
    Bitacora bitacora;

    do {
        // Men� principal del sistema log�stico
        system("cls");
        cout << "\t\t========================================" << endl;
        cout << "\t\t| SISTEMA LOGISTICO - MENU PRINCIPAL   |" << endl;
        cout << "\t\t========================================" << endl;
        cout << "\t\t 1. M�dulo de Reportes" << endl;
        cout << "\t\t 2. M�dulo de Usuarios" << endl;
        cout << "\t\t 3. M�dulo de Inventario" << endl;
        cout << "\t\t 4. M�dulo de Facturaci�n" << endl;
        cout << "\t\t 5. M�dulo de Bit�cora" << endl;
        cout << "\t\t 6. Salir" << endl;
        cout << "\t\t========================================" << endl;
        cout << "\t\tSeleccione una opci�n: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                reportes.mostrarMenuReportes(); // Llamar al m�dulo de reportes
                break;
            case 2:
                usuarios.mostrarMenuUsuarios(); // Llamar al m�dulo de usuarios
                break;
            case 3:
                inventario.mostrarMenuInventario(); // Llamar al m�dulo de inventario
                break;
            case 4:
                facturacion.mostrarMenuFacturacion(); // Llamar al m�dulo de facturaci�n
                break;
            case 5:
                bitacora.mostrarMenuBitacora(); // Llamar al m�dulo de bit�cora
                break;
            case 6:
                cout << "\nSaliendo del sistema... Gracias por usar el sistema log�stico." << endl;
                break;
            default:
                cout << "\nOpci�n inv�lida. Intente de nuevo." << endl;
                system("pause");
                break;
        }

    } while(opcion != 6);

    return 0;
}
