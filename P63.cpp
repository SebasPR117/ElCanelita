#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int arreglo[50],a=rand()%(1-20);
   int *Parreglo=&arreglo[0];
   for(int i=0; i<50; i++)
   {
       Parreglo[i]=rand()%(0-15);
       Parreglo[i]=Parreglo[i]*a;
       cout<<arreglo[i]<<endl;
   }
}
