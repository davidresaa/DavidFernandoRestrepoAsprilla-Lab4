#include "aseo.h"
#include <iostream>

// Constructor

Aseo::Aseo(string _nombre, string _marca, int _precio, int _descuento, int _cantidadInventario, string _material) {
    nombre = _nombre;
    marca = _marca;
    precio = _precio;
    descuento = _descuento;
    cantidadInventario = _cantidadInventario;
    material = _material;
}

// Métodos getter
string Aseo::getNombre() {
    return nombre;
}

string Aseo::getMarca() {
    return marca;
}

int Aseo::getPrecio() {
    return precio;
}

int Aseo::getDescuento() {
    return descuento;
}

int Aseo::getCantidadInventario() {
    return cantidadInventario;
}

string Aseo::getMaterial() {
    return material;
}
// Método para modificar atributos
template <typename T>
void Aseo::modificar(T nuevoValor) {
    // Ejemplo de implementación, puedes modificar según tus necesidades
    cout << "Modificando atributo con valor: " << nuevoValor << endl;
}

void Aseo::realizarCompra(int cantidad) {
    if (cantidad <= cantidadInventario) {
        cantidadInventario -= cantidad;
    } else {
        std::cout << "No hay suficiente inventario disponible." << std::endl;
    }
}
