#include "comestible.h"
#include <iostream>

// Constructor
Comestible::Comestible(string _nombre, string _marca, int _precio, int _descuento, int _cantidadInventario, string _fechaVencimiento) {
    nombre = _nombre;
    marca = _marca;
    precio = _precio;
    descuento = _descuento;
    cantidadInventario = _cantidadInventario;
    fechaVencimiento = _fechaVencimiento;
}

// Métodos getter
string Comestible::getNombre() {
    return nombre;
}

string Comestible::getMarca() {
    return marca;
}

int Comestible::getPrecio() {
    return precio;
}

int Comestible::getDescuento() {
    return descuento;
}

int Comestible::getCantidadInventario() {
    return cantidadInventario;
}

string Comestible::getFechaVencimiento() {
    return fechaVencimiento;
}


// Método para modificar atributos
template <typename T>
void Comestible::modificar(T nuevoValor) {
    // Ejemplo de implementación, puedes modificar según tus necesidades
    cout << "Modificando atributo con valor: " << nuevoValor << endl;
}

// Método para realizar una compra de este producto
void Comestible::realizarCompra(int cantidad) {
    if (cantidad <= cantidadInventario) {
        cantidadInventario -= cantidad;
    } else {
        std::cout << "No hay suficiente inventario disponible." << std::endl;
    }
}
