//ejercicio 12/
// Sebastian Sorich 

#include<iostream>
using namespace std;


int main (){
    int dias1, mes1, dias2, mes2;
    cout<<"ingrese la fecha en el siguiente orden;"<<endl;
    cout<<"mes"<<endl; cin>>mes1;
    cout<<"dia"<<endl; cin>>dias1;
    mes2=mes1*30;
    dias2=dias1+mes2-30;
    if(dias2<80){
    	cout<<"la estacion es verano"<<endl;
	}
	else{
	}
	if(dias2<172 && dias2>=80){
		cout<<"la estacion es otoño"<<endl;
	}
	else{
	}
	if(dias2<264 && dias2>=172){
		cout<<"la estacion es invierno"<<endl;
	}
	else{
	}
	if(dias2<355 && dias2>=264){
		cout<<"la estacion es primavera"<<endl;
	}
	else{
		
	}
	if(dias2<365 && dias2>=355){
		cout<<"la estacion es verano"<<endl;
	}
	else{
		
	}
	cout<<"gracias por su preferencia"<<endl;
	
	
	
      return 0;
}