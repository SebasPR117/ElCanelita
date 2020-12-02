#include <iostream>
#include <math.h>
using namespace std;

void x(int a, int b, float &c, float &d, float &e)
{
    //Llenar arreglo
    int arreglo[a][b];
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            arreglo[i][j]=rand()%(1-99);
            cout<<arreglo[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Mayor
    c=arreglo[0][0];
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            if(arreglo[i][j]>c)
            {
                c=arreglo[i][j];
            }
        }
    }

    //Menor
    d=arreglo[0][0];
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            if(arreglo[i][j]<d)
            {
                d=arreglo[i][j];
            }
        }
    }
    
    //Promedio
    e=(d+c)/2;
}

int main()
{
   int a,b;
   float c,d,e;
   cout<<"Este programa muestra el numero mayor y el menor generados aleatoriamente en una matriz de dimenciones nxn,"<<endl;
   cout<<"y de esos dos valores se gererara el promedio"<<endl;
   cout<<"Ingrese el numero de filas"<<endl;
   cin>>a;
   cout<<"Ingrese el numero de columnas"<<endl;
   cin>>b;
   cout<<endl;
   x(a,b,c,d,e);
   cout<<"El numero mayor es:"<<c<<endl;
   cout<<"El numero menor es: "<<d<<endl;
   cout<<"El promedio de los dos numeros es: "<<e<<endl;
   
}
