#include <iostream>
#include <string>
using namespace std;

//  la interfaz
class Inspeccionable {
public:
    virtual void inspeccionar() = 0;
};

// clase abstrac
class Vehiculo {
private:
    const string placa;
    string marca;
    string modelo;
    int anio;

protected:
    double tarifaDia;

public:
    Vehiculo(string placa, string marca, string modelo, int anio, double tarifaDia)
        : placa(placa) {
        this->marca = marca;
        this->modelo = modelo;
        this->anio = anio;
        this->tarifaDia = tarifaDia;
    }

    string getPlaca() {
        return placa;
    }

    void setMarca(string marca) {
        this->marca = marca;
    }

    void setModelo(string modelo) {
        this->modelo = modelo;
    }

    void setAnio(int anio) {
        if (anio > 0 && anio <= 2026) {
            this->anio = anio;
        }
    }

    void setTarifaDia(double tarifaDia) {
        if (tarifaDia > 0) {
            this->tarifaDia = tarifaDia;
        }
    }

    virtual double calcularCosto(int dias) = 0;

// sobrecarga
    double calcularCosto(int dias, double descuento) {
        return calcularCosto(dias) - descuento;
    }

    virtual void mostrarDatos() {
        cout << "Placa: " << placa << endl;
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Anio: " << anio << endl;
        cout << "Tarifa por dia: S/ " << tarifaDia << endl;
    }

    virtual ~Vehiculo() {}
};

class Automovil : public Vehiculo, public Inspeccionable {
public:
    Automovil(string placa, string marca, string modelo, int anio, double tarifaDia)
        : Vehiculo(placa, marca, modelo, anio, tarifaDia) {}

    double calcularCosto(int dias) override {
        return dias * tarifaDia;
    }

    void inspeccionar() override {
        cout << "Automovil inspeccionado: combustible, luces y danos." << endl;
    }
};

class Motocicleta : public Vehiculo, public Inspeccionable {
public:
    Motocicleta(string placa, string marca, string modelo, int anio, double tarifaDia)
        : Vehiculo(placa, marca, modelo, anio, tarifaDia) {}

    double calcularCosto(int dias) override {
        return dias * tarifaDia * 0.90;
    }

    void inspeccionar() override {
        cout << "Motocicleta inspeccionada: frenos, combustible y danos." << endl;
    }
};

class Camioneta : public Vehiculo, public Inspeccionable {
public:
    Camioneta(string placa, string marca, string modelo, int anio, double tarifaDia)
        : Vehiculo(placa, marca, modelo, anio, tarifaDia) {}

    double calcularCosto(int dias) override {
        return dias * tarifaDia * 1.20;
    }

    void inspeccionar() override {
        cout << "Camioneta inspeccionada: carga, llantas y combustible." << endl;
    }
};

int main() {
    const int MAX = 20;

    Vehiculo* vehiculos[MAX];
    Inspeccionable* inspecciones[MAX];

    int contador = 0;
    int opcion;

    do {
        cout << endl;
        cout << "===== AUTORENTA PERU =====" << endl;
        cout << "1. Registrar vehiculo" << endl;
        cout << "2. Mostrar vehiculos y calcular alquiler" << endl;
        cout << "3. Inspeccionar vehiculos" << endl;
        cout << "4. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            if (contador >= MAX) {
                cout << "Ya no se pueden registrar mas vehiculos." << endl;
            } else {
                int tipo, anio;
                double tarifa;
                string placa, marca, modelo;

                cout << endl;
                cout << "Tipo de vehiculo" << endl;
                cout << "1. Automovil" << endl;
                cout << "2. Motocicleta" << endl;
                cout << "3. Camioneta" << endl;
                cout << "Elija el tipo: ";
                cin >> tipo;

                cout << "Ingrese placa: ";
                cin >> placa;

                cout << "Ingrese marca: ";
                cin >> marca;

                cout << "Ingrese modelo: ";
                cin >> modelo;

                cout << "Ingrese anio: ";
                cin >> anio;

                cout << "Ingrese tarifa por dia: S/ ";
                cin >> tarifa;

                if (tipo == 1) {
                    Automovil* a = new Automovil(placa, marca, modelo, anio, tarifa);
                    vehiculos[contador] = a;
                    inspecciones[contador] = a;
                    contador++;
                    cout << "Automovil registrado correctamente." << endl;
                } else if (tipo == 2) {
                    Motocicleta* m = new Motocicleta(placa, marca, modelo, anio, tarifa);
                    vehiculos[contador] = m;
                    inspecciones[contador] = m;
                    contador++;
                    cout << "Motocicleta registrada correctamente." << endl;
                } else if (tipo == 3) {
                    Camioneta* c = new Camioneta(placa, marca, modelo, anio, tarifa);
                    vehiculos[contador] = c;
                    inspecciones[contador] = c;
                    contador++;
                    cout << "Camioneta registrada correctamente." << endl;
                } else {
                    cout << "Tipo no valido." << endl;
                }
            }
        } else if (opcion == 2) {
            if (contador == 0) {
                cout << "No hay vehiculos registrados." << endl;
            } else {
                int dias;

                cout << "Ingrese cantidad de dias de alquiler: ";
                cin >> dias;

                cout << endl;
                cout << "===== VEHICULOS REGISTRADOS =====" << endl;

                for (int i = 0; i < contador; i++) {
                    cout << endl;
                    cout << "Vehiculo " << i + 1 << endl;
                    vehiculos[i]->mostrarDatos();

                    cout << "Costo total: S/ "
                         << vehiculos[i]->calcularCosto(dias) << endl;

                    cout << "Costo con descuento de S/ 20: S/ "
                         << vehiculos[i]->calcularCosto(dias, 20) << endl;

                    cout << "------------------------" << endl;
                }
            }
        } else if (opcion == 3) {
            if (contador == 0) {
                cout << "No hay vehiculos para inspeccionar." << endl;
            } else {
                cout << endl;
                cout << "===== INSPECCION DE VEHICULOS =====" << endl;

                for (int i = 0; i < contador; i++) {
                    cout << "Vehiculo " << i + 1 << ": ";
                    inspecciones[i]->inspeccionar();
                }
            }
        } else if (opcion == 4) {
            cout << "Saliendo del sistema..." << endl;
        } else {
            cout << "Opcion no valida." << endl;
        }

    } while (opcion != 4);

// liberar memoria
    for (int i = 0; i < contador; i++) {
        delete vehiculos[i];
    }

}

