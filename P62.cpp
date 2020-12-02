#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int arreglo[51],a=0;
   int *Parreglo=&arreglo[0];
   for(int i=0; i<51; i++)
   {
       Parreglo[i]=a;
       cout<<arreglo[i]<<endl;
       a=a+2;
   }
}
