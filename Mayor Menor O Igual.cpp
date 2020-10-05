#include<iostream>
using namespace std;
int main()
{
	float n,i,suma,promedio,menor,mayor,numero;
	//int menor,mayor,numero;
	cout<<"Ingrese la cantidad de numeros: ";
	cin>>n;
	i=1;
	suma=0;
	cout<<"Ingrese el primer numero: ";
	cin>>numero;
	mayor=numero;// se les coloca el primer numero pedido
	menor=numero;//
	
	
	while (i<=n)
	{
	i=i+1;//aumentar el contador
	suma=suma+numero; //Acumulador de la suma
	
	if(mayor<numero)
	mayor=numero;

    if(menor>numero)
    menor=numero;
    
	if (i<=n)
	{
    cout<<"Ingrese un valor: ";
    cin>>numero;
	}

	}	
	cout<<"El mayor es: "<<mayor<<endl;
    cout<<"El menor es: "<<menor<<endl;
	cout<<"El promedio es: "<<suma/n<<endl;   
	return 0;
	
}