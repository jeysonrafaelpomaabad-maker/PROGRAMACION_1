#include<iostream>

using namespace std;
int main (){
	int num1 , num2 , num3;
	
	cout<<"TIPOS DE TRIANGULO"<< endl; 
	cout<<"coloca el lado n1:"<< endl;
	cin>>num1;
	cout<<"coloca el lado n2:"<<endl;
	cin>>num2;
	cout<<"coloca e lado n3:"<<endl;
	cin>>num3;
	
if ((num1 + num2 <= num3) || (num1 + num3 <= num2) || (num2 + num3 <= num1)) {
        cout << "El triangulo no existe" << endl;
    }
    else if (num1 == num2 && num2 == num3) {
        cout << "El triangulo es equilatero" << endl;
    }
    else if (num1 == num2 || num1 == num3 || num2 == num3) {
        cout << "El triangulo es isosceles" << endl;
    }
    else {
        cout << "El triangulo es escaleno" << endl;
         }

	}   