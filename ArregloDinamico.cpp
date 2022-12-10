# include <iostream>
# include <stdlib.h>
using namespace std;


int *calificaciones, cantidadCalificaciones;
void pedirDatos();
void mostrarDatos();

int main()
{
    pedirDatos();
    mostrarDatos();
    cout<<"\n\n____________________________\n\n";
    delete[] calificaciones;
    pedirDatos();
    mostrarDatos();


    system ("pause");
    return 0;
}

void pedirDatos()
{
    cout<<"Cuantas calificaciones necesitas: ";
    cin>>cantidadCalificaciones;
    calificaciones= new int [cantidadCalificaciones]; //Se crea el arreglo dinamico
    for (int i = 0; i < cantidadCalificaciones; i++)
    {
        cout<<"Calificacion "<<i+1<<": ";
        cin>>calificaciones[i];
    }    
}

void mostrarDatos()
{
    for (int i = 0; i < cantidadCalificaciones; i++)
    {
        cout<<"Calificacion "<<i+1<<": "<<calificaciones[i]
        <<"  - Direccion de memoria: "<<&calificaciones[i]<<"\n";
        
    }
}