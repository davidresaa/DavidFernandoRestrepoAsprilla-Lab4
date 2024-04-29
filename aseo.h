#ifndef ASEO_H
#define ASEO_H

#include <string>

using namespace std;

class Aseo {
private:
    string nombre;
    string marca;
    int precio;
    int descuento;
    int cantidadInventario;
    string material;

public:
    // Constructor
    Aseo(){};
    Aseo(string _nombre, string _marca, int _precio, int _descuento, int _cantidadInventario, string _material);

    // Métodos getter
    string getNombre();
    string getMarca();
    int getPrecio();
    int getDescuento();
    int getCantidadInventario();
    string getMaterial();



    void realizarCompra(int cantidad);
    // Método para modificar atributos
    template <typename T>
    void modificar(T nuevoValor);
};

#endif
