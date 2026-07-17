#include <iostream>

using namespace std;

int main() {
    
    int num1, num2;
    int *p1, *p2;
    int suma;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    p1 = &num1;
    p2 = &num2;

    suma = *p1 + *p2;

    cout << "La suma es: " << suma;

}