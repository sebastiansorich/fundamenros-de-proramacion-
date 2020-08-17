/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Sebastian Sorich//
#include <iostream> 
using namespace std; 
int main()
{
    int a, b;
    cout<< "Ingrese los numeros para realizar operaciones: " ;
    cout << "Ingrese el primer numero: " ;
    cin>> a;
    cout << "Ingrese el segundo numero: " ;
    cin>> b; 
    cout << "La suma es: " << a+b;
    
    cout << "La resta: " << a-b; 
    
    cout << "La multiplicacion es: " << a*b;
    
    cout << "La division es: " << a/b;
    
    cout << "El resto es: " << a%b;

    return 0;
}
