#include <iostream>
#include <string>

using namespace std;

// clase para guardar los datos del paciente
class Paciente
{
public:
    int dni;
    string nombre;
    string apellidoPaterno;
    string apellidoMaterno;
};

int main()
{
    // arreglo para guardar los pacientes
    Paciente pacientes[5];

    // contador de pacientes registrados
    int cp = 0;

    int opcion;

    do
    {
        cout << endl;
        cout << "===== PACIENTES =====" << endl;
        cout << "1. Registrar paciente" << endl;
        cout << "2. Mostrar pacientes" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion)
        {
        case 1:

            // validar el limite de pacientes
            if(cp >= 5)
            {
                cout << "Solo se permiten 5 pacientes." << endl;
                break;
            }

            // ingresar los datos
            cout << "DNI: ";
            cin >> pacientes[cp].dni;

            cout << "Nombre: ";
            cin >> pacientes[cp].nombre;

            cout << "Apellido paterno: ";
            cin >> pacientes[cp].apellidoPaterno;

            cout << "Apellido materno: ";
            cin >> pacientes[cp].apellidoMaterno;

            // aumentar el contador
            cp++;

            cout << "Paciente registrado correctamente." << endl;

            break;

        case 2:

            cout << endl;
            cout << "--- PACIENTES ---" << endl;

            // mostrar todos los pacientes
            for(int i = 0; i < cp; i++)
            {
                cout << "DNI: "
                     << pacientes[i].dni
                     << endl;

                cout << "Nombre completo: "
                     << pacientes[i].nombre
                     << " "
                     << pacientes[i].apellidoPaterno
                     << " "
                     << pacientes[i].apellidoMaterno
                     << endl;

                cout << endl;
            }

            break;

        case 0:

            cout << "Fin del programa." << endl;

            break;

        default:

            cout << "Opcion incorrecta." << endl;
        }

    } while(opcion != 0);

}