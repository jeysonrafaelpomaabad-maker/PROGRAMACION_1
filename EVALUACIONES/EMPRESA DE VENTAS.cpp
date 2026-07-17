#include<iostream>
using namespace std;

int main()
{
    float ventas[30];
    float suma = 0;
    float promedio;
    int mayores = 0;

    
    for(int i=0; i<30; i++)
    {
        cout<<"Ingrese venta del dia "<<i+1<<": ";
        cin>>ventas[i];

        suma = suma + ventas[i];
    }


    promedio = suma / 30;

    
    for(int i=0; i<30; i++)
    {
        if(ventas[i] > promedio)
        {
            mayores++;
        }
    }


    cout<<"\nPromedio de ventas: "<<promedio<<endl;
    cout<<"Dias con ventas mayores al promedio: "<<mayores;

    
}