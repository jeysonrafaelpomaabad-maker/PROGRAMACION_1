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

// clase para guardar los servicios
class Servicio
{
public:
    int id;
    string nombre;
};

// clase para guardar los datos de la cita
class Cita
{
public:
    string fecha;
    string paciente;
    string medico;
    string servicio;
};

int main()
{
    // arreglo para guardar las citas
    Cita citas[20];

    // arreglo de servicios
    Servicio servicios[3];

    servicios[0].id = 1;
    servicios[0].nombre = "Traumatologia";

    servicios[1].id = 2;
    servicios[1].nombre = "Pediatria";

    servicios[2].id = 3;
    servicios[2].nombre = "Cardiologia";

    // contador de citas
    int cc = 0;

    int opcion;

    do
    {
        cout << endl;
        cout << "===== CITAS =====" << endl;
        cout << "1. Registrar cita" << endl;
        cout << "2. Mostrar citas" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion)
        {
        case 1:
        {
            // ingresar los datos de la cita
            cout << "Fecha: ";
            cin >> citas[cc].fecha;

            cout << "Paciente: ";
            cin >> citas[cc].paciente;

            cout << "Medico: ";
            cin >> citas[cc].medico;

            cout << endl;
            cout << "Servicios disponibles:" << endl;

            // mostrar los servicios
            for(int i = 0; i < 3; i++)
            {
                cout << servicios[i].id
                     << ". "
                     << servicios[i].nombre
                     << endl;
            }

            int opServicio;

            cout << "Seleccione servicio: ";
            cin >> opServicio;

            // guardar el servicio elegido
            citas[cc].servicio =
                servicios[opServicio - 1].nombre;

            // aumentar el contador
            cc++;

            cout << "Cita registrada correctamente."
                 << endl;

            break;
        }

        case 2:

            cout << endl;
            cout << "--- CITAS ---" << endl;

            // mostrar todas las citas
            for(int i = 0; i < cc; i++)
            {
                cout << "Fecha: "
                     << citas[i].fecha
                     << endl;

                cout << "Paciente: "
                     << citas[i].paciente
                     << endl;

                cout << "Medico: "
                     << citas[i].medico
                     << endl;

                cout << "Servicio: "
                     << citas[i].servicio
                     << endl;

                cout << "-------------------"
                     << endl;
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