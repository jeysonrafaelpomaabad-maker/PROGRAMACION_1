#include <iostream>
#include <string>
using namespace std;

int stockTotal = 100;
int ventasAcumuladas = 0;

void mostrarStockTotal() {
    cout << "Stock total disponible: " << stockTotal << endl;
}

void registrarVenta(int cantidad) {
    if (cantidad <= stockTotal) {
        stockTotal -= cantidad;
        ventasAcumuladas += cantidad;
        cout << "Venta registrada: " << cantidad << " productos." << endl;
    } else {
        cout << "No hay suficiente stock para la venta" << endl;
    }
}

float calcularPrecioConDescuento(float precioUnitario, float descuento) {
    return precioUnitario - (precioUnitario * descuento / 100);
}

void mostrarProducto(string nombre, float precio) {
    cout << "Producto: " << nombre << " | Precio: $" << precio << endl;
}

void actualizarInventario(int inventario[], int numProductos, int cantidadExtra) {
    for (int i = 0; i < numProductos; i++) {
        inventario[i] += cantidadExtra; 
    }
}

int main() {
   
    float precioFinal = calcularPrecioConDescuento(50.0, 10); 
    mostrarProducto("polos", precioFinal);

    mostrarStockTotal();
    registrarVenta(20);

    int inventario[3] = {10, 15, 20}; 
    actualizarInventario(inventario, 3, 5); 

    cout << "Inventario actualizado: ";
    for (int i = 0; i < 3; i++) {
        cout << inventario[i] << " ";
    }
    cout << endl;

}