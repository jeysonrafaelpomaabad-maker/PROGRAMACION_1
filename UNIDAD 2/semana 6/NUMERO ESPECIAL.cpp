#include <iostream>
using namespace std;

int especial(int n)
{
    if(n < 10)
    {
        return n;
    }

    int suma = 0;

    while(n > 0)
    {
        suma = suma + n % 10;
        n = n / 10;
    }

    return especial(suma);
}

int main()
{
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "Resultado: " << especial(numero) << endl;

}