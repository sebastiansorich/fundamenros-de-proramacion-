// ejercicio 2
//Sebastian Sorich

#include <iostream>


using namespace std;

int main()
{
	float diametro ;
	float radio    ;
	float pi       ;
	float perimetro;
	float area     ;
	float volumen  ;
	
	cout<<"Ingrese el diametro de la esfera: ";
	cin>> diametro;
	pi=3.1416;
	radio=diametro/2;
	area=radio*radio*pi;
	volumen=(4/3)*radio*radio*radio*pi;
	cout<<"El perimetro es: "<<perimetro<<endl;
	cout<<"El area es: "<<area<<endl;
	cout<<"El volumen es: "<<volumen<<endl;

	return 0;
	
	}