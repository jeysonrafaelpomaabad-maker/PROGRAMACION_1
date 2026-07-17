#include <iostream>
#include <string>

using namespace std;

// clase para guardar los datos del medico
class Medico
{
public:
    int dni;
    string nombre;
    string apellidoPaterno;
    string apellidoMaterno;
    string especialidad;
};

int main()
{
    // arreglo para guardar los medicos
    Medico medicos[5];

    // contador de medicos registrados
    int cm = 0;

    int opcion;

    do
    {
        cout << endl;
        cout << "===== MEDICOS =====" << endl;
        cout << "1. Registrar medico" << endl;
        cout << "2. Mostrar medicos" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion)
        {
        case 1:

            // ingresar los datos
            cout << "DNI: ";
            cin >> medicos[cm].dni;

            cout << "Nombre: ";
            cin >> medicos[cm].nombre;

            cout << "Apellido paterno: ";
            cin >> medicos[cm].apellidoPaterno;

            cout << "Apellido materno: ";
            cin >> medicos[cm].apellidoMaterno;

            cout << "Especialidad: ";
            cin >> medicos[cm].especialidad;

            // aumentar el contador
            cm++;

            cout << "Medico registrado correctamente." << endl;

            break;

        case 2:

            cout << endl;
            cout << "--- MEDICOS ---" << endl;

            // mostrar todos los medicos
            for(int i = 0; i < cm; i++)
            {
                cout << "DNI: "
                     << medicos[i].dni
                     << endl;

                cout << "Nombre Completo: "
                     << medicos[i].nombre
                     << " "
                     << medicos[i].apellidoPaterno
                     << " "
                     << medicos[i].apellidoMaterno
                     << endl;

                cout << "Especialidad: "
                     << medicos[i].especialidad
                     << endl;

                cout << endl;
            }

            break;

        case 0:

            cout << "Fin del programa."
                 << endl;

            break;

        default:

            cout << "Opcion incorrecta."
                 << endl;
        }

    } while(opcion != 0);

}