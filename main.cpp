#include <iostream>
#include "problema1.h"

int main() {
    int opcion;

    std::cout << "Seleccione el problema que desea ejecutar:" << std::endl;
    std::cout << "1. Problema 1" << std::endl;
    std::cout << "2. Problema 2" << std::endl;
    std::cout << "3. Problema 3" << std::endl;
    std::cout << "Ingrese su opción: ";
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            {
                Problema1 problema1;
                problema1.mostrarMenu();
                break;
            }
        case 2:
            // Aquí se ejecutaría el Problema 2 si estuviera implementado
            std::cout << "El Problema 2 aún no está implementado." << std::endl;
            break;
        case 3:
            // Aquí se ejecutaría el Problema 3 si estuviera implementado
            std::cout << "El Problema 3 aún no está implementado." << std::endl;
            break;
        default:
            std::cout << "Opción no válida. Por favor, seleccione una opción válida." << std::endl;
            break;
    }

    return 0;
}
