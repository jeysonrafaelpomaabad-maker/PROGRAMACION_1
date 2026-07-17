#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Ingrese 3 numeros: ";
    cin >> a >> b >> c;

    // Mayor
    if (a >= b && a >= c) {
        cout << "Mayor: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "Mayor: " << b << endl;
    } else {
        cout << "Mayor: " << c << endl;
    }

    // Menor
    if (a <= b && a <= c) {
        cout << "Menor: " << a << endl;
    } else if (b <= a && b <= c) {
        cout << "Menor: " << b << endl;
    } else {
        cout << "Menor: " << c << endl;
    }

    // Iguales
    if (a == b && b == c) {
        cout << "Los tres numeros son iguales" << endl;
    } else if (a == b || a == c || b == c) {
        cout << "Hay dos numeros iguales" << endl;
    } else {
        cout << "Todos son diferentes" << endl;
    }


}