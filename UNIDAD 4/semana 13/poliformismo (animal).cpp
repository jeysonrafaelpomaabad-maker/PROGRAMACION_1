#include <iostream>
using namespace std;

// clase padre
class Animal
{
public:
    // metodo que sera sobrescrito
    virtual void sonido()
    {
        cout << "El animal hace un sonido." << endl;
    }

    // sobrecarga: mismo metodo con diferentes parametros
    void mostrar()
    {
        cout << "Animal sin nombre." << endl;
    }

    void mostrar(string nombre)
    {
        cout << "Nombre del animal: " << nombre << endl;
    }
};

// clase hija
class Perro : public Animal
{
public:
    // sobreescritura del metodo sonido
    void sonido() override
    {
        cout << "El perro ladra: Guau Guau!" << endl;
    }
};

int main()
{
    Animal animal;
    Perro perro;

    // llamada al metodo sin parametro
    animal.mostrar();

    // llamada al metodo con parametro
    animal.mostrar("Firulais");

    cout << endl;

    // metodo de la clase padre
    animal.sonido();

    // metodo sobrescrito en la clase hija
    perro.sonido();

}