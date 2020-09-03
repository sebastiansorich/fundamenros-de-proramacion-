//Sebastian Sorich 
#include <iostream>
#include "conio.h"

using namespace std;

int main()
{
    int i,facto,numero;
	i=1;
	facto=1;
	cout<<"Ingresar el numero: ";
	cin>>numero;
	while (i<=numero){
		facto=facto*i;
		i=i+1;
	}
	cout<<"el valor factorial de: "<<numero<<", es: "<<facto;
	getch();
	
    

    return 0;
}
