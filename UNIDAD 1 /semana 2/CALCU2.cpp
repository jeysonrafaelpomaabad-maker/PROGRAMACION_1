#include <iostream>
using namespace std;

int main() {
    int opcion;
    float num1, num2;
    float acumulado = 0;
// todo dentro de un do while , para que la calcularo siga realizando mas operaciones y no cerrarce con la primera
    do {
        cout << " ..........CALCULADORA ......." << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese el primer numero: ";
            cin >> num1;

            cout << "Ingrese el segundo numero: ";
            cin >> num2;
        }
// switch para colocar casos y break para que al seleccionar bote el caso selec..
        switch(opcion) {
            case 1:
                acumulado = num1 + num2;
                cout << "Resultado: " << acumulado << endl;
                break;

            case 2:
                acumulado = num1 - num2;
                cout << "Resultado: " << acumulado << endl;
                break;

            case 3:
                acumulado = num1 * num2;
                cout << "Resultado: " << acumulado << endl;
                break;

            case 4:
                if(num2 != 0) {
                    acumulado = num1 / num2;
                    cout << "Resultado: " << acumulado << endl;
                } else {
                    cout << "No se puede dividir entre 0" << endl;
                }
                break;

            case 5:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opcion no valida" << endl;
        }

        cout << "Resultado acumulado es: " << acumulado << endl;

    } while(opcion != 5);

 
}