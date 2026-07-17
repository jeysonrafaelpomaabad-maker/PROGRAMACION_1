#include <iostream>
using namespace std;

int main()
{
    float promedio[5];
    float n1, n2, n3, n4;
    int mayor = 0;

    for(int i = 0; i < 5; i++)
    {
        cout << endl;
        cout << "Estudiante " << i + 1 << endl;

        cout << "Ingrese nota 1: ";
        cin >> n1;

        cout << "Ingrese nota 2: ";
        cin >> n2;

        cout << "Ingrese nota 3: ";
        cin >> n3;

        cout << "Ingrese nota 4: ";
        cin >> n4;
        
       // Calcula el promedio de las 4 notas
        promedio[i] = (n1 + n2 + n3 + n4) / 4;
    }

    cout << endl;
    cout << "PROMEDIOS" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "Estudiante " << i + 1 << ": " << promedio[i] << endl;
    }

      // Busca el estudiante con el mayor promedio
    for(int i = 1; i < 5; i++)
    {
        if(promedio[i] > promedio[mayor])
        {
            mayor = i;
        }
    }

    cout << endl;
    cout << "Estudiante con mayor promedio: " << mayor + 1 << endl;
    cout << "Promedio: " << promedio[mayor] << endl;

    cout << endl;
    cout << "APROBADOS Y DESAPROBADOS" << endl;

    for(int i = 0; i < 5; i++)
    {
        // Ve  si el estudiante aprobo o desaprobo
        if(promedio[i] >= 11)
        {
            cout << "Estudiante " << i + 1 << " Aprobado" << endl;
        }
        else
        {
            cout << "Estudiante " << i + 1 << " Desaprobado" << endl;
        }
    }
    
}