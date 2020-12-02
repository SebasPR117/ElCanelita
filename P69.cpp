#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int n;
   cout<<"Este programa hace una matriz identidad de dimenciones nxn"<<endl;
   cout<<"De que dimencion quiere que sea la matriz?"<<endl;
   cin>>n;
   int arreglo[n][n];
   int *Parreglo=&arreglo[0][0];
   for(int i=0; i<n; i++)
   {
       for(int j=0; j<n; j++)
       {
           if(i==j)
           {
               Parreglo[i*n+j]=1;
           }
           else
           {
               Parreglo[i*n+j]=0;
           }
           cout<<arreglo[i][j]<<" ";
       }
       cout<<endl;
   }
}
