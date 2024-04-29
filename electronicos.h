#ifndef ELECTRONICOS_H
#define ELECTRONICOS_H

#include <string>

using namespace std;

class Electronicos {
private:
    string nombre;
    string marca;
    int precio;
    int descuento;
    int cantidadInventario;
    int garantia;

public:
    // Constructor
    Electronicos(){};
    Electronicos(string _nombre, string _marca, int _precio, int _descuento, int _cantidadInventario, int _garantia);

    // Métodos getter
    string getNombre();
    string getMarca();
    int getPrecio();
    int getDescuento();
    int getCantidadInventario();
    int getGarantia();



    // Método para realizar compras
    void realizarCompra(int cantidad);
    // Método para modificar atributos
    template <typename T>
    void modificar(T nuevoValor);
};

#endif
