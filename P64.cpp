#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int arreglo[10];
   int *Parreglo=&arreglo[0];
   for(int i=0; i<10; i++)
   {
       cout<<"Ingrese un numero"<<endl;
       cin>>Parreglo[i];
   }
   for(int i=0; i<10; i++)
   {
       cout<<arreglo[i]<<endl;
   }
}
