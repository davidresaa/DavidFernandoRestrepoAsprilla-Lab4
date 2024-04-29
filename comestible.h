#ifndef COMESTIBLE_H
#define COMESTIBLE_H

#include <string>

using namespace std;

class Comestible {
private:
    string nombre;
    string marca;
    int precio;
    int descuento;
    int cantidadInventario;
    string fechaVencimiento;

public:
    // Constructor
    Comestible(){};
    Comestible(string _nombre, string _marca, int _precio, int _descuento, int _cantidadInventario, string _fechaVencimiento);

    // Métodos getter
    string getNombre();
    string getMarca();
    int getPrecio();
    int getDescuento();
    int getCantidadInventario();
    string getFechaVencimiento();


    // Método para realizar compras
    void realizarCompra(int cantidad);

    // Método para modificar atributos
    template <typename T>
    void modificar(T nuevoValor);
};

#endif
