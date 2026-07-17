#include <iostream>
using namespace std;

class Cliente {
public:
    string dni;
    string nombre;
};

class Cola {
private:
    Cliente clientes[5];
    int frente;
    int fin;

public:
    Cola() {
        frente = 0;
        fin = 0;
    }

    // insertar cliente al final de la cola
    void insertar(Cliente c) {
        if (fin < 5) {
            clientes[fin] = c;
            fin++;
        }
        else {
            cout << "cola llena" << endl;
        }
    }

    // atender cliente de la cola
    void atender() {
        if (frente < fin) {
            cout << "cliente atendido: " << clientes[frente].nombre << endl;
            frente++;
        }
        else {
            cout << "no hay clientes para atender" << endl;
        }
    }

    // mostrar estado de la cola
    void mostrar() {
        if (frente == fin) {
            cout << "cola vacia" << endl;
        }
        else {
            cout << "clientes en espera:" << endl;

            for (int i = frente; i < fin; i++) {
                cout << "dni: " << clientes[i].dni << endl;
                cout << "nombre: " << clientes[i].nombre << endl;
                cout << endl;
            }
        }
    }

    // contar clientes restantes
    int cantidad() {
        return fin - frente;
    }
};

int main() {

    Cola cola;
    Cliente cliente;

    // registrar 5 clientes
    for (int i = 0; i < 5; i++) {

        cout << "ingrese dni del cliente " << i + 1 << ": ";
        cin >> cliente.dni;

        cout << "ingrese nombre del cliente " << i + 1 << ": ";
        cin >> cliente.nombre;

        cola.insertar(cliente);
    }

    cout << endl;
    cout << "estado inicial de la cola" << endl;
    cola.mostrar();

    cout << endl;
    cout << "atendiendo clientes" << endl;

    cola.atender();
    cola.atender();

    cout << endl;
    cout << "estado actual de la cola" << endl;
    cola.mostrar();

    cout << endl;
    cout << "clientes que quedan: " << cola.cantidad() << endl;

}