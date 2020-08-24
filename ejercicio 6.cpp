// ejercicio 6
//sebastian Sorich 


#include <iostream>

using namespace std;

int main() {
	int hora   ;
	int minuto ;
	int segundo;
	int h      ;
	int x      ;
	
	cout<< "Introduce la hora en formato 24 horas: "<<endl;
	cin>>hora;
	cout<<"Introduce los minutos: "<<endl;
	cin>>minuto;
	cout<< "Introduce los segundos: "<<endl;
	cin>>segundo;
	x= hora-12;
	if (hora>12) {
		cout<<"esta es la hora: ";
		cout<< x;
		cout<<":"<<minuto;
		cout<<":"<<segundo;
		cout<<"PM";
		}
	else {
		cout<<"la hora es:  ";
		cout<< hora;
		cout<<":"<<minuto;
		cout<<":"<<segundo;
		cout<<"AM";
	
}