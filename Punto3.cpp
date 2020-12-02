#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int a,b=0,n=1,c,d;
   float e=0.0;

   cout<<"Este programa determina la mediana de los datos ingresados por el usuario"<<endl;
   cout<<"Cuantos datos desea ingresar?"<<endl;
   cin>>a;

   float arreglo[a];
   float *Parreglo=&arreglo[0];

   while (b<a)
   {
       cout<<"Ingrese el "<<n<<" numero"<<endl;
       cin>>Parreglo[b];
       b++;
       n++;
   }
   cout<<endl;
   
   for (int i=0; i<a; i++)
   {
       for (int j=i+1; j<a; j++)
       {
           if (Parreglo[i] > Parreglo[j])
           {
               c=Parreglo[i];
               Parreglo[i]=Parreglo[j];
               Parreglo[j]=c;
           }
       }
   }

   for (int r = 0; r < a; r++)
   {
       cout<<Parreglo[r]<<endl;
   }
   
   d=a/2;
   if (a%2==0)
   {
       e=(Parreglo[d-1]+Parreglo[d])/2.0;
   }
   else
   {
       e=Parreglo[d];
   }
   cout<<endl;

   cout<<"La mediana es: "<<e<<endl;
   

}