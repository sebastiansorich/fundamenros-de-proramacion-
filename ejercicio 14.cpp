//Sebastia Sorich
//Ejercicio 14 
#include <iostream>

using namespace std;

int main()

{
float total,soda;
int hamburguesas,hconqueso,papas;
char R1,R2,R3,R4;

cout<<"*********************MENU*******************************************************************************************************************************************"<<endl;
cout<<"1) Hamburguesas  (3Bs)	         "<<endl;
cout<<"2) Hamburguesas  con queso ( 5Bs) "<<endl;
cout<<"3) Papas fritas ( 2Bs)	         "<<endl;
cout<<"4) Soda	(2.5Bs)	            	 "<<endl;
cout<<"********************************************************************************************************************************************************************"<<endl;



    cout<<"cuantas hamburguesas se compro?"<<endl;
    cin >> hamburguesas; 


    cout<<"cuantas hamburguesas con queso se compro?"<<endl;
    cin >> hconqueso;  
 

    cout<<"cuantas papas fritas se compro?"<<endl;
    cin >> papas; 
  

    cout<<"cuantas sodas se compro?"<<endl;
    cin >> soda; 
    
if(hamburguesas> 0){
    hamburguesas=(hamburguesas)* 3;
    }
    if(hconqueso> 0){
    hconqueso =(hconqueso)* 5;
    }
    if(papas> 0){
    papas=(papas)* 2;
    }   
    if(soda> 0){
   soda= (soda)* 2.5;
    }
    
    total = hamburguesas+hconqueso+papas+soda;
    cout<<"el total es....."<<total<<"Bs" ;

    return 0;
}


