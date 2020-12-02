#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int n=5,a;
   int arreglo[n][n];
   int *Parreglo=&arreglo[0][0];
   for(int i=0; i<n; i++)
   {
       for(int j=0; j<n; j++)
       {
           Parreglo[i*n+j]=rand()%(1-15);
           cout<<arreglo[i][j]<<" ";
       }
       cout<<endl;
   }
    a=arreglo[0][0];
   for(int i=0; i<n; i++)
   {
       for(int j=0; j<n; j++)
       {
           if(Parreglo[i*n+j]<a)
           {
               a=Parreglo[i*n+j];
           }
       }
   }
   cout<<endl;
   cout<<"El valor minimo es: "<<a<<endl;
}
