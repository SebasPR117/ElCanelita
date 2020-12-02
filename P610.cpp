#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int n=5;
   cout<<"Este programa suma dos matrices"<<endl;
   int arreglo[n][n];
   int arreglo2[n][n];
   int a[n][n];
   int *Parreglo=&arreglo[0][0];
   int *Qarreglo=&arreglo2[0][0];
   for(int i=0; i<n; i++)
   {
       for(int j=0; j<n; j++)
       {
           Parreglo[i*n+j]=rand()%(0-9);
           Qarreglo[i*n+j]=rand()%(0-9);
           a[i][j]=Parreglo[i*n+j]+Qarreglo[i*n+j];
       }
   }
   for(int i=0; i<n; i++)
   {
       for(int j=0; j<n; j++)
       {
           cout<<arreglo[i][j]<<" ";
       }
       cout<<endl;
   }
   cout<<endl;
   cout<<endl;
   for(int i=0; i<n; i++)
   {
       for(int j=0; j<n; j++)
       {
           cout<<arreglo2[i][j]<<" ";
       }
       cout<<endl;
   }
   cout<<endl;
   cout<<endl;
   for(int i=0; i<n; i++)
   {
       for(int j=0; j<n; j++)
       {
           cout<<a[i][j]<<" ";
       }
       cout<<endl;
   }
}
