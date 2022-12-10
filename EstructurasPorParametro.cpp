# include <iostream>
using namespace std;

struct Empleado
{
    int numeroEmpleado;
    char nombre[50];
}e1;

void pedirDatos(Empleado& e);
void mostrarDatos(Empleado& e);

int main()
{
    pedirDatos(e1);
    mostrarDatos(e1);


    system("pause");
    return 0;
}

void pedirDatos(Empleado& e) //tipo de variable empleado que es una estructura
{
    cout<<"Ingresa por favor los datos del empleado\n";
    cout<<"Numero de empleado: "; cin>>e.numeroEmpleado;
    cout<<"Nombre del empleado: "; cin>>e.nombre;
}

void mostrarDatos(Empleado& e)
{
    cout<<"Datos del Empleado\n";
    cout<<"Numero del empleado: "<<e.numeroEmpleado<<"\n";
    cout<<"Nombre del empleado: "<<e.nombre<<"\n";
}