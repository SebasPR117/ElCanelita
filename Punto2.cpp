#include <iostream>
#include <math.h>
#include <string>
using namespace std;



struct estudiante
{
    string nombre;
    int edad;
    int id;
    int semestre;
};

int main()
{
    int n,a=0,b,c=1;
    cout<<"Este programa deja ingresar los datos de la cantidad de estudiantes que requiera"<<endl;
    cout<<"Cuantos estudiantes desea ingresar?"<<endl;
    cin>>n;
    estudiante x[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Ingrese el nombre del estudiante "<<c<<endl;
        cin>>x[i].nombre;
        cout<<"Ingrese la edad"<<endl;
        cin>>x[i].edad;
        cout<<"Ingrese el documento"<<endl;
        cin>>x[i].id;
        cout<<"Ingrese el semestre que esta cursando"<<endl;
        cin>>x[i].semestre;
        c++;
    }
    cout<<endl;
    while(a!=1)
    {
        cout<<"Desea realizar una conseulta?"<<endl;
        cout<<"1-Si"<<endl;
        cout<<"2-No"<<endl;
        cin>>b;
        switch (b)
        {
        case 1:
            cout<<"Ingrese el numero en lista del estudiante que quiere consultar"<<endl;
            cin>>n;
            cout<<"Nombre: "<<x[n-1].nombre<<endl;
            cout<<"Edad: "<<x[n-1].edad<<endl;
            cout<<"Documento: "<<x[n-1].id<<endl;
            cout<<"Semestre cursado: "<<x[n-1].semestre<<endl;
            break;
        case 2:
            a++;
            break;
        default:
            cout<<"Opcion invalida"<<endl;
            break;
        }
    }
    cout<<"Gracias por usar el programa"<<endl;
}
