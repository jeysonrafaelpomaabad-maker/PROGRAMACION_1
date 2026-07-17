#include <iostream>
#include <string>

using namespace std;

// clase abstracta
class Vehiculo
{
private:
    const string placa;
    string marca;
    string modelo;
    int anio;

protected:
    double tarifaDia;

public:

    // constructor
    Vehiculo(string placa, string marca, string modelo,
             int anio, double tarifaDia)
        : placa(placa)
    {
        this->marca = marca;
        this->modelo = modelo;
        this->anio = anio;
        this->tarifaDia = tarifaDia;
    }

    // obtener la placa
    string getPlaca()
    {
        return placa;
    }

    // cambiar la marca
    void setMarca(string marca)
    {
        this->marca = marca;
    }

    // cambiar el modelo
    void setModelo(string modelo)
    {
        this->modelo = modelo;
    }

    // cambiar el anio
    void setAnio(int anio)
    {
        if(anio > 0 && anio <= 2026)
        {
            this->anio = anio;
        }
    }

    // cambiar la tarifa
    void setTarifaDia(double tarifaDia)
    {
        if(tarifaDia > 0)
        {
            this->tarifaDia = tarifaDia;
        }
    }

    // metodo abstracto
    virtual double calcularCosto(int dias) = 0;

    // mostrar la informacion
    virtual void mostrarDatos()
    {
        cout << "Placa: " << placa << endl;
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Anio: " << anio << endl;
        cout << "Tarifa por dia: "
             << tarifaDia << endl;
    }

    // destructor virtual
    virtual ~Vehiculo()
    {

    }
};

// clase hija para probar la clase abstracta
class Automovil : public Vehiculo
{
public:

    Automovil(string placa,
              string marca,
              string modelo,
              int anio,
              double tarifaDia)

        : Vehiculo(placa,
                   marca,
                   modelo,
                   anio,
                   tarifaDia)
    {

    }

    // implementar el metodo abstracto
    double calcularCosto(int dias)
    {
        return dias * tarifaDia;
    }
};

int main()
{
    // crear un objeto
    Automovil auto1("ABC123",
                    "Toyota",
                    "Corolla",
                    2024,
                    120);

    // mostrar los datos
    auto1.mostrarDatos();

    cout << "Costo: "
         << auto1.calcularCosto(5)
         << endl;

}