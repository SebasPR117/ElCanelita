#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int arreglo[10];
   int *Parreglo=&arreglo[0];
   for(int i=0; i<10; i++)
   {
       Parreglo[i]=rand()%(1-15);
       cout<<arreglo[i];
       if(Parreglo[i]%2==0)
       {
           cout<<" Par"<<endl;
       }
       else
       {
           cout<<" Impar"<<endl;
       }
   }
}
