#include <iostream>
#include <string>

using namespace std;

// clase base
class Notificacion
{
protected:
    string mensaje;
    string destinatario;

public:

    // constructor
    Notificacion(string m, string d)
    {
        mensaje = m;
        destinatario = d;
    }

    // destructor virtual
    virtual ~Notificacion()
    {
    }

    // metodo virtual
    virtual void enviar()
    {
        cout << "enviando notificacion" << endl;
    }

    // sobrecarga
    void enviar(bool prioritario)
    {
        if(prioritario)
        {
            cout << "envio prioritario a "
                 << destinatario << endl;
        }
    }

    // reenviar mensaje
    void reenviar()
    {
        cout << "reenviando mensaje a "
             << destinatario << endl;
    }
};

// clase correo
class Correo : public Notificacion
{
public:

    // constructor
    Correo(string m, string d)
    : Notificacion(m, d)
    {
    }

    // envio por correo
    void enviar()
    {
        cout << "correo enviado a "
             << destinatario << endl;

        cout << "mensaje: "
             << mensaje << endl;
    }
};

// clase sms
class SMS : public Notificacion
{
public:

    // constructor
    SMS(string m, string d)
    : Notificacion(m, d)
    {
    }

    // envio por sms
    void enviar()
    {
        cout << "sms enviado a "
             << destinatario << endl;

        cout << "mensaje: "
             << mensaje << endl;
    }
};

// clase token
class Token : public Notificacion
{
public:

    // constructor
    Token(string m, string d)
    : Notificacion(m, d)
    {
    }

    // envio por token
    void enviar()
    {
        cout << "token enviado a "
             << destinatario << endl;

        cout << "mensaje: "
             << mensaje << endl;
    }
};

int main()
{
    // crear objetos
    Correo correo(
        "reunion a las 3 pm",
        "juan@gmail.com"
    );

    SMS sms(
        "codigo de acceso",
        "987654321"
    );

    Token token(
        "inicio de sesion",
        "usuario01"
    );

    cout << endl;
    cout << "--- correo ---" << endl;
    correo.enviar();

    cout << endl;
    cout << "--- envio prioritario ---" << endl;
    correo.enviar();

    cout << endl;
    cout << "--- reenviar ---" << endl;
    correo.reenviar();

    cout << endl;
    cout << "--- sms ---" << endl;
    sms.enviar();

    cout << endl;
    cout << "--- token ---" << endl;
    token.enviar();

}