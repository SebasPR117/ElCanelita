#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int n,a=0,b=1;
   cout<<"Este programa suma los datos impares de un arreglo de n posiciones"<<endl;
   cout<<"De cuantas posiciones sera el arreglo?"<<endl;
   cin>>n;
   cout<<endl;
   int arreglo[n];
   int *Parreglo=&arreglo[0];
   for(int i=0; i<n; i++)
   {
       Parreglo[i]=b;
       cout<<arreglo[i]<<endl;
       a=a+Parreglo[i];
       b=b+2;
   }
   cout<<endl;
   cout<<"La suma de todos los valores equivale a: "<<a<<endl;
   
}
