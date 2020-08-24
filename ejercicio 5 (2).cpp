//ejercicio 5
//sebastian sorich 
#include <iostream>

using namespace std;

int main()
{
    float capital ;
	float interes ;
	float ninteres;
    int   tiempo    ;

    cout<<"Cuanto es su capital?"<<endl;
    cin>>capital;
    cout<<"Cual es el interes"<<endl;
    cin>>interes;
    cout<<"por cuantos años"<<endl;
    cin>>tiempo ;
    interes = ((interes / 100) + 1);
    if (tiempo  > 1)
    {
        ninteres = (capital * interes * tiempo ) - (capital * (tiempo -1));
        cout<<"su interes simple es " << ninteres << "dolares"<<endl;
    }
    else
    {
        cout<<"su interes simple es" << (interes*tiempo *capital) << "dolares"<<endl;
    }
    return 0;
}