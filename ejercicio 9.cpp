//ejercicio 9
//Construir un algoritmo que lea una cantidad de SEGUNDOS
// y los convierta en HORAS, MINUTOS Y SEGUNDOS 
// sebastian sorich 

#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    int segundos= 0 ;
    int minutos = 0 ;
    int horas   = 0 ;
    
    cout<<"ingrese segundos"<<endl;
    cin>> segundos ;
   
    
    
 
   if(segundos>= 60){
       
        minutos= (segundos/60) ;
        if(minutos>= 60){
            minutos= (segundos/60)- 60 ;
            
        }
      
    }
    if(segundos>=3600){
        
        horas= (segundos/3600) ;
       
    }
   
   
    segundos = (segundos%60)  ;

    
cout<< horas<<" hora(s) "<< minutos<<" minuto(s) "<<segundos<<" segundo(s)";
    
    return 0;
}
