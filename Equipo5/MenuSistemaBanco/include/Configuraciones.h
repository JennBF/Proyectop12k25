#ifndef CONFIGURACIONES_H
#define CONFIGURACIONES_H

#include <iostream>
#include <cstdlib> // para system()

//Espera a que el usuario presione ENTER para continuar.
//Tambi�n puede limpiar la pantalla.
void pausarYVolver() {
    std::cout << "\nPresione ENTER para volver al men� principal...";
    std::cin.ignore(); // Ignora el enter anterior si qued� algo
    std::cin.get();    // Espera que se presione enter

    // Limpia la pantalla (Windows/Linux)
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

#endif
