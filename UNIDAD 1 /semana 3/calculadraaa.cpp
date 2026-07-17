#include <iostream>
using namespace std;

int main() {
    double num1, num2, resultado;
    int opcion;
    
    cout << "=== CALCULADORA ===" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "Elija una opcion (1-4): ";
    cin >> opcion;
    
    // Manejo de error para opción inválida
    if (opcion >= 1 && opcion <= 4) {
        
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        
        // Realizar la operación según la opción
        if (opcion == 1) {
            resultado = num1 + num2;
            cout << "Resultado: " << num1 << " + " << num2 << " = " << resultado << endl;
        }
        else if (opcion == 2) {
            resultado = num1 - num2;
            cout << "Resultado: " << num1 << " - " << num2 << " = " << resultado << endl;
        }
        else if (opcion == 3) {
            resultado = num1 * num2;
            cout << "Resultado: " << num1 << " * " << num2 << " = " << resultado << endl;
        }
        else if (opcion == 4) {
            // Manejo de error para división entre cero
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "Resultado: " << num1 << " / " << num2 << " = " << resultado << endl;
            } else {
                cout << "ERROR: No se puede dividir entre cero!" << endl;
            }
        }
        
    } else {
        cout << "ERROR: Opcion no valida!" << endl;
    }
    
    return 0;
}