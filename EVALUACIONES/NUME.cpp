

#include <iostream>

using namespace std;

// funcion recursiva
int especial(int n)
{
    // caso base
    if(n < 10)
    {
        return n;
    }

    int suma = 0;

    // sumar los digitos
    while(n > 0)
    {
        suma = suma + n % 10;
        n = n / 10;
    }

    // volver a llamar la funcion
    return especial(suma);
}

int main()
{
    int numero;

    // pedir el numero
    cout << "Ingrese un numero: ";
    cin >> numero;

    // mostrar el resultado
    cout << "Resultado: "
         << especial(numero)
         << endl;

    
}