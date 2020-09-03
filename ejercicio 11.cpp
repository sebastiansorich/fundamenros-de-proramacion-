//ejercicio 11
//Sebastian Sorich 
#include <iostream>

using namespace std;



int main()
{ int P;
     cout<<"selecione el peso en gramos de la carta que desea enviar"<<endl<<"1.- peso<=50g"<<endl<<"2.- 50g<peso<=100g"<<endl<<"3.- 100g<peso<=200g"<<endl<<"4.- 200g<peso<=350g"<<endl<<"5.- 350g<peso<=500g"<<endl<<"6.- peso>500g"<<endl; cin>>P;
     
     switch(P){
       case 1: cout<<"el costo es 1,50 bs"<<endl; break;
       case 2: cout<<"el costo es 4 bs"<<endl; break;
       case 3: cout<<"el costo es 6 bs"<<endl; break;
       case 4: cout<<"el costo es 10,50 bs"<<endl; break;
       case 5: cout<<"el costo es 15 bs"<<endl; break;
       case 6: cout<<"no se puede enviar como carta"<<endl; break;
     }
		
	cout<<"gracias por su preferencia";
	return 0;
		
        

}