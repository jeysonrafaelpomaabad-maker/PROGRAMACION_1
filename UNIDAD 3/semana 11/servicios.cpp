#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// clase para guardar los servicios
class Servicio
{
public:
    int id;
    string nombre;
};

// clase para guardar las citas
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
    // arreglo de servicios
    Servicio servicios[3];

    servicios[0].id = 1;
    servicios[0].nombre = "Traumatologia";

    servicios[1].id = 2;
    servicios[1].nombre = "Pediatria";

    servicios[2].id = 3;
    servicios[2].nombre = "Cardiologia";

    // arreglo de citas
    Cita citas[20];

    // datos de ejemplo para probar la exportacion
    citas[0].paciente = "Juan";
    citas[0].servicio = "Traumatologia";

    citas[1].paciente = "Maria";
    citas[1].servicio = "Pediatria";

    citas[2].paciente = "Pedro";
    citas[2].servicio = "Traumatologia";

    int cc = 3;

    int opcion;

    do
    {
        cout << endl;
        cout << "===== SERVICIOS =====" << endl;
        cout << "1. Mostrar servicios" << endl;
        cout << "2. Exportar servicio a TXT" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion)
        {
        case 1:

            cout << endl;
            cout << "--- SERVICIOS ---" << endl;

            // mostrar los servicios
            for(int i = 0; i < 3; i++)
            {
                cout << servicios[i].id
                     << ". "
                     << servicios[i].nombre
                     << endl;
            }

            break;

        case 2:
        {
            int op;

            cout << endl;
            cout << "1. Traumatologia" << endl;
            cout << "2. Pediatria" << endl;
            cout << "3. Cardiologia" << endl;

            cout << "Seleccione servicio: ";
            cin >> op;

            string nombreArchivo;

            // elegir el nombre del archivo
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

            // guardar los pacientes del servicio
            for(int i = 0; i < cc; i++)
            {
                if(citas[i].servicio == servicios[op - 1].nombre)
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