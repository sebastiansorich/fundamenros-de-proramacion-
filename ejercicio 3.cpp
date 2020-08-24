// ejercicio 3
//sebastian sorich 

#include <iostream>

using namespace std;

int main() {
    
	float parcial1;
	float parcial2;
	float parcial3;
	float final;
	float practico;
	float notaparciales;
	float notafinal;
	float notapractico;
	float parciales;
	float notatotal;
	cout<<"Ingresar las notas de los parciales: ";
	cin>>parcial1;
	cin>>parcial2;
	cin>>parcial3;
	parciales=parcial1+parcial2+parcial3;
	notaparciales=(parciales*100/300)*0.4;
	cout<<"Esta es la nota de los parciales: "<<notaparciales<<endl;
	cout<<"Ingresar la nota del final: ";
	cin>>final;
	notafinal=final*0.4;
	
	cout<<"Esta es la nota del final: "<<notafinal<<endl;
	cout<<"Ingrese la nota del practico: ";
	cin>>practico;
	notapractico=practico*0.2;

	cout<<"Esta es la nota del practico: "<<notapractico<<endl;

	notatotal=notaparciales+notafinal+notapractico;
	
	cout<<"La nota total es : "<<notatotal;
	return 0;

}