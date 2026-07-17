#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Paciente
{
public:
    int dni;
    string nombre;
    string apellidoPaterno;
    string apellidoMaterno;
};

class Medico
{
public:
    int dni;
    string nombre;
    string apellidoPaterno;
    string apellidoMaterno;
    string especialidad;
};

class Servicio
{
public:
    int id;
    string nombre;
};

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
    Paciente pacientes[5];
    Medico medicos[5];
    Cita citas[20];

    Servicio servicios[3];

    servicios[0].id = 1;
    servicios[0].nombre = "Traumatologia";

    servicios[1].id = 2;
    servicios[1].nombre = "Pediatria";

    servicios[2].id = 3;
    servicios[2].nombre = "Cardiologia";

    int cp = 0;
    int cm = 0;
    int cc = 0;

    int opcion;

    do
    {
        cout << endl;
        cout << "===== CLINICA =====" << endl;
        cout << "1. Registrar paciente" << endl;
        cout << "2. Registrar medico" << endl;
        cout << "3. Mostrar servicios" << endl;
        cout << "4. Registrar cita" << endl;
        cout << "5. Mostrar pacientes" << endl;
        cout << "6. Mostrar medicos" << endl;
        cout << "7. Mostrar citas" << endl;
        cout << "8. Exportar servicio a TXT" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion)
        {
        case 1:

            if(cp >= 5)
            {
                cout << "Solo se permiten 5 pacientes." << endl;
                break;
            }

            cout << "DNI: ";
            cin >> pacientes[cp].dni;

            cout << "Nombre: ";
            cin >> pacientes[cp].nombre;

            cout << "Apellido paterno: ";
            cin >> pacientes[cp].apellidoPaterno;

            cout << "Apellido materno: ";
            cin >> pacientes[cp].apellidoMaterno;

            cp++;
            break;

        case 2:

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

            cm++;
            break;

        case 3:

            cout << endl;
            cout << "--- SERVICIOS ---" << endl;

            for(int i = 0; i < 3; i++)
            {
                cout << servicios[i].id
                     << ". "
                     << servicios[i].nombre
                     << endl;
            }

            break;

        case 4:
        {
            cout << "Fecha: ";
            cin >> citas[cc].fecha;

            cout << "Paciente: ";
            cin >> citas[cc].paciente;

            cout << "Medico: ";
            cin >> citas[cc].medico;

            cout << endl;
            cout << "Servicios disponibles:" << endl;

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

            citas[cc].servicio =
                servicios[opServicio - 1].nombre;

            cc++;

            break;
        }

        case 5:

            cout << endl;
            cout << "--- PACIENTES ---" << endl;

            for(int i = 0; i < cp; i++)
            {
                cout << "DNI: "
                     << pacientes[i].dni
                     << endl;

                cout << "Nombre Completo: "
                     << pacientes[i].nombre
                     << " "
                     << pacientes[i].apellidoPaterno
                     << " "
                     << pacientes[i].apellidoMaterno
                     << endl;

                cout << endl;
            }

            break;

        case 6:

            cout << endl;
            cout << "--- MEDICOS ---" << endl;

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

        case 7:

            cout << endl;
            cout << "--- CITAS ---" << endl;

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

        case 8:
        {
            int op;

            cout << endl;
            cout << "1. Traumatologia" << endl;
            cout << "2. Pediatria" << endl;
            cout << "3. Cardiologia" << endl;

            cout << "Seleccione servicio: ";
            cin >> op;

            string nombreArchivo;

            if(op == 1)
                nombreArchivo = "traumatologia.txt";
            else if(op == 2)
                nombreArchivo = "pediatria.txt";
            else
                nombreArchivo = "cardiologia.txt";

            ofstream archivo(nombreArchivo);

            archivo << "Servicio: "
                    << servicios[op - 1].nombre
                    << endl;

            archivo << endl;
            archivo << "PACIENTES" << endl;

            int contador = 1;

            for(int i = 0; i < cc; i++)
            {
                if(citas[i].servicio ==
                   servicios[op - 1].nombre)
                {
                    archivo << contador
                            << ") "
                            << citas[i].paciente
                            << endl;

                    contador++;
                }
            }

            archivo.close();

            cout << "Archivo exportado correctamente."
                 << endl;

            break;
        }

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