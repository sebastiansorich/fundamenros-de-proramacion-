//ejercicio 13
//Sebastian Sorich

#include <iostream>
#include <cmath> 
using namespace std;



int main()
{
	float a, b, c, x1, x2, x3, x4, x5;
	cout<<"algoritmo para la solucion de escuaciones cuadraticas"<<endl;
	cout<<"dada la ecuacion Ax²+Bx+C=0"<<endl;
	cout<<"introducir el valor de A: "<<endl; cin>>a;
	cout<<"introducir el valor de B: "<<endl; cin>>b;
	cout<<"introducir el valor de C: "<<endl; cin>>c;
	x1=sqrt((pow(b,2))-(4*a*c));
	x2=(-(b)+(x1));
	x3=(-(b)-(x1));
	x4=x3/(2*a);
	x5=x2/(2*a);
	cout<<"los resultados para la ecuacion cuadratica son: "<<x4<<" y "<<x5<<endl;
	cout<<"gracias por su preferencia"<<endl;
	return 0;

}