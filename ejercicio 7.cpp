//ejercicio 7 
//sebastian sorich 

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float I ;
    float C ;
    float N ;
    float T ;
    
   cout<<"bienvenid@ a la calculadora de interes compuesto"<<endl;
   cout<<"su capital es....:";
    cin>>C;
   cout<<"su periodo de años es....:";
    cin>>N;
    cout<<"con una taza de interes de....:";
    cin>>T;
    cout<<"el interes compuesto es:"<< pow((1+T),N)*C;

    return 0;
}
