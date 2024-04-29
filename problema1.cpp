#include "problema1.h"
#include <iostream>
#include "comestible.h" // Incluimos los archivos de encabezado de las clases de productos
#include "electronicos.h"
#include "aseo.h"

using namespace std; // Importamos namespace std

void Problema1::realizarCompra() {

    Comestible comestible;
    // Crear un objeto de la clase Electronico
    Electronicos electronico;
    // Crear un objeto de la clase Aseo
    Aseo aseo;

}
// Función para mostrar el menú principal y gestionar las opciones del usuario
void Problema1::mostrarMenu() {
    int opcion;

    do {
        // Mostrar el menú principal
        cout << "----- Menú Principal -----" << endl;
        cout << "1. Agregar productos" << endl;
        cout << "2. Modificar nombres, precios o % descuento" << endl;
        cout << "3. Realizar compra" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        // Procesar la opción del usuario
        switch (opcion) {
            case 1:
                agregarProductos(); // Llamar a la función para agregar productos
                break;
            case 2:
                // Llamar a la función para modificar nombres, precios o % descuento
                // Implementación pendiente
                break;
            case 3:
                // Llamar a la función para realizar una compra
                // Implementación pendiente
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, seleccione una opción válida." << endl;
                break;
        }

    } while (opcion != 4);
}

// Función para agregar productos
void Problema1::agregarProductos() {
    int opcionClase;
    int cantidadProductos;

    cout << "Seleccione la clase de producto que desea agregar:" << endl;
    cout << "1. Comestible" << endl;
    cout << "2. Electrónicos" << endl;
    cout << "3. Aseo" << endl;
    cout << "Ingrese su opción: ";
    cin >> opcionClase;

    cout << "Ingrese la cantidad de productos que desea agregar: ";
    cin >> cantidadProductos;

    switch (opcionClase) {
        case 1:
            {
                // Agregar productos comestibles
                for (int i = 0; i < cantidadProductos; ++i) {
                    string nombre, marca, fechaVencimiento;
                    int precio, descuento, cantidadInventario;

                    cout << "Ingrese el nombre del producto: ";
                    cin.ignore(); // Limpiar el buffer de entrada
                    getline(cin, nombre);

                    cout << "Ingrese la marca del producto: ";
                    getline(cin, marca);

                    cout << "Ingrese el precio del producto: ";
                    cin >> precio;

                    cout << "Ingrese el descuento del producto (%): ";
                    cin >> descuento;

                    cout << "Ingrese la cantidad en inventario del producto: ";
                    cin >> cantidadInventario;

                    cout << "Ingrese la fecha de vencimiento del producto (MM/YYYY): ";
                    cin >> fechaVencimiento;

                    // Crear objeto Comestible y agregarlo al inventario
                    Comestible comestible(nombre, marca, precio, descuento, cantidadInventario, fechaVencimiento);
                    // Aquí deberías agregar el objeto comestible al inventario de la tienda
                    // Por ahora, simplemente imprimimos los detalles del producto agregado
                    cout << "Producto comestible agregado: " << nombre << endl;
                }
                break;
            }
        case 2:
            // Agregar productos electrónicos (implementación pendiente)
            cout << "Función para agregar productos electrónicos. Implementación pendiente." << endl;
            break;
        case 3:
            // Agregar productos de aseo (implementación pendiente)
            cout << "Función para agregar productos de aseo. Implementación pendiente." << endl;
            break;
        default:
            cout << "Opción no válida. No se agregaron productos." << endl;
            break;
    }
}
