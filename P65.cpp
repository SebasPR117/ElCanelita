#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int n,a=0,b=1;
   cout<<"Este programa muestra el dato mayor ingresado en un arreglo de n posiciones"<<endl;
   cout<<"De cuantas posiciones sera el arreglo?"<<endl;
   cin>>n;
   int arreglo[n];
   int *Parreglo=&arreglo[0];
   for(int i=0; i<n; i++)
   {
       cout<<"Ingrese el "<<b<<" dato"<<endl;
       cin>>Parreglo[i];
       if(Parreglo[i]>a)
       {
           a=Parreglo[i];
       }
       b++;
   }
   cout<<"El numero mayor es: "<<a<<endl;
   
}
