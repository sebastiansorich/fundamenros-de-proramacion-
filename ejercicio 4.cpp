//ejercicio 4
//sebastian sorich 


#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    string  nombre      ;
    float horas         ;
    float precioxhora   ;
    float impuesto  = 0 ;
    float sueldo        ;


    cout<<"ingrese el nombre del tabajador"<<endl;
    cin>> nombre ;
    
    cout<<"ingrese las horas que trabajadas"<<endl;
    cin>> horas ;
    
    cout<<"ingrese el precio por hora"<<endl;
    cin>> precioxhora ;
    
    sueldo = horas * precioxhora ;
    
    if(sueldo>= 8272){
        impuesto = sueldo * 0.13;
    }
    cout<<"su suelado bruto es de: "<<endl<<sueldo - impuesto;

    return 0;
}
