//ejercicio 10
//Sebastian Sorich 

#include <iostream>

using namespace std;



int main()
{
   int H1,H2,M1,M2,S1,S2,rh1,rh2,rm1,rm2,s1,s2,st,M,rM,H,rH;
   cout<<"algoritmo de resta de horas"<<endl;
   cout<<"(la segunda hora dede ser mayor a la primera)"<<endl;
   cout<<"ingrese la primera hora en el siguiente orden; horas-minutos-segundos:"<<endl; cin>>H1; cin>>M1; cin>>S1;
   cout<<"ingrese la segunda hora en el siguiente orden; horas-minutos-segundos:"<<endl; cin>>H2; cin>>M2; cin>>S2;
   rh1=H1*3600;
   rm1=M1*60;
   s1=S1+rm1+rh1;
   rh2=H2*3600;
   rm2=M2*60;
   s2=S2+rm2+rh2;
   st=s2-s1;
   M=st/60;
   rM=st%60;
   H=M/60;
   rH=M%60;
   

   cout<<"la diferencia de tiempo es: "<<H <<" Horas "<<rH <<" Minutos "<<rM <<" segundos"<< endl;
   
   return 0;
}
