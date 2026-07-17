#include<iostream>
#include<string>
using namespace std;

int main() {
  int tarjeta, opcion;
  int contrasenia, clave = 2026;
  double saldo = 2500 ,retiro , deposito;
  
 do{
  cout<<" $$$$ CAJERO $$ "<< endl;
  cout<<"INGRESE EL N· DE TARJETA"<< endl;
  cin>> tarjeta ;
  cout<<" INGRESE SU CONTRASEÑA"<< endl ;
  cin>> contrasenia;
	} while(contrasenia != clave );
	cout<<" ingrese nuevamente su tarjeta:"<<endl;
      if(contrasenia == clave) {
      	do{
  cout<<"......... MENUU .........."<<endl;
  cout<<" 1. consultar saldo"<< endl; 
  cout<<" 2. realizar retiro "<< endl;
  cout<<" 3. realizar deposito"<< endl;
  cout<<" 4. cambio de contraseña"<< endl;
  cout<<" 5. autenticarse nuevamente"<< endl;
  cout<<" 6. salir del sistema"<< endl;
  cin>> opcion ;
  
  switch(opcion) {
  	
	case 1:
  		cout<<" tu saldo actual es de: "<< saldo << endl;
  		break;
  	
	case 2:
  		cout<<" que cantidad desea retirar?  "<< endl;
  		cin>> retiro;
  		
  		saldo = saldo - retiro;
  		
  		cout<<"tu nuevo saldo es de :"<< saldo <<endl;
  		
		  if(retiro > saldo) {
  			cout<<"  fondo insuficiente"<< endl;
		  }
		break;
	
	case 3:
		cout<<" ingrese el monto a depositar :"<< endl;
		cin>> deposito;
		
		saldo = saldo + deposito;
		
	    cout<<" tu nuevo saldo es :"<< saldo << endl;
		break;
		
	case 4:
		int clavN;
		cout<<" contraseña actual :"<<endl;
		cin>> contrasenia;
		
		if(contrasenia==clave )
		{
			cout<<" contraseña nueva :"<<endl;
			cin>>clavN;
			contrasenia = clavN;
		} else{
		  cout<<" la contraseña ingresada es incorrecta"<<endl;
		      }
		break;
		
	case 5:
		cout<<" ingrese su num. de tarjeta:"<<endl;
		cin>>tarjeta;
		if(tarjeta == 4578){
			cout<<"autenticacion correcta"<<endl;
		}
		else{
			cout<<"num. tarjeta invalido"<<endl;
		}
  		break;
  		
  	case 6:
  		cout<<"saliendoo....."<<endl;
  		break;
  		
  	default:
  		cout<<"opcion invalida"<<endl;
  }

}while(opcion !=6); 
  
} else{
	cout<<"contraseña incorrecta"<<endl;
}

}