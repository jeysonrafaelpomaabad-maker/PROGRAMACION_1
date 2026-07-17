#include <iostream>
using namespace std;

int main() {
    int tipo;
    float monto, descuento = 0, total;

    cout << "Ingrese el monto: ";
    cin >> monto;

    cout << "Tipo de cliente:\n";
    cout << "1. Normal\n";
    cout << "2. VIP\n";
    cout << "3. Premium\n";
    cout << "Seleccione una opcion: ";
    cin >> tipo;

    switch(tipo) {
        case 1:
            descuento = 0;
            break;
        case 2:
            descuento = 0.20;
            break;
        case 3:
            descuento = 0.30;
            break;
        default:
            cout << "Opcion invalida";
            return 0;
    }

    total = monto - (monto * descuento);

    cout << "Total a pagar: " << total << endl;

    return 0;
}
