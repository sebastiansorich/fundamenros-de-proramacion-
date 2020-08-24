//ejercicio 8
//Sebastian Sorich

#include <iostream>

using namespace std;

int main()
{
	float a;
	float b;
	float c;
	float d;
	float e;
	float f;
	float x;
	float z;
	cout<< "sistemas de ecuaciones de la forma: "; 
	cout<< "ax + bz = c" <<endl;
	cout<< "dx + fz = e" <<endl;
	
	cout<< " coloque el valor de a" <<endl;
	cin>> a;
	cout<< " coloque el valor de b" <<endl;
	cin >> b;
	cout<< " coloque el valor de c" <<endl;
	cin >> c;
	cout<< " coloque el valor de d" <<endl;
	cin>> d;
	cout<< " coloque el valor de e" <<endl;
	cin >> e;
	cout<< " coloque el valor de f" <<endl;
	cin >> f;
	
	x= (-b*e+f*c)/(-b*d+a*f) ;
	z= (-c*d+a*e)/(-b*d+a*f) ;
	
	cout<< "la solucion del sistema de ecuaciones es" << endl;
	cout<< "x es igual a"<<endl ;
	
	cout<< x <<endl;
	
	cout<< "z es igual a" <<endl;
	cout<<z <<endl;

    return 0;
}
