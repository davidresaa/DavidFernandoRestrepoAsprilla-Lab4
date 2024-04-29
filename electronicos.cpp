#include "electronicos.h"
#include <iostream>

// Constructor
Electronicos::Electronicos(string _nombre, string _marca, int _precio, int _descuento, int _cantidadInventario, int _garantia) {
    nombre = _nombre;
    marca = _marca;
    precio = _precio;
    descuento = _descuento;
    cantidadInventario = _cantidadInventario;
    garantia = _garantia;
}

// Métodos getter
string Electronicos::getNombre() {
    return nombre;
}

string Electronicos::getMarca() {
    return marca;
}

int Electronicos::getPrecio() {
    return precio;
}

int Electronicos::getDescuento() {
    return descuento;
}

int Electronicos::getCantidadInventario() {
    return cantidadInventario;
}

int Electronicos::getGarantia() {
    return garantia;
}


// Método para modificar atributos
template <typename T>
void Electronicos::modificar(T nuevoValor) {
    // Ejemplo de implementación, puedes modificar según tus necesidades
    cout << "Modificando atributo con valor: " << nuevoValor << endl;
}

void Electronicos::realizarCompra(int cantidad) {
    if (cantidad <= cantidadInventario) {
        cantidadInventario -= cantidad;
    } else {
        std::cout << "No hay suficiente inventario disponible." << std::endl;
    }
}
