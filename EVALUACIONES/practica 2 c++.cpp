#include<iostream>
#include<string>
using namespace std;

//numero par o impar
int main(){ 
    int numero ;
    
    cout<<"INGRESE UN NUMERO:";
    cin>>numero;
    
    if ( numero % 2 == 0)
    {
    	cout<<"el numero es par";
	}
    else 
    {
    	cout<<"el numero es impar";
	}
}