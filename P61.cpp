#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int arreglo[100];
   int *Parreglo=&arreglo[0];
   for(int i=0; i<100; i++)
   {
       Parreglo[i]=1;
       cout<<arreglo[i]<<endl;
   }
}
