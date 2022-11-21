# include <iostream>
using namespace std; 

struct Empleados
{
    char nombre[65], direccion[65], telefono [15];
}
empleado1={"Leo","Sabaneta","3103357850"}, 
empleado2={"May", "Envigado","317445985"}, 
empleado3={"Julian","Belen","3154888888"};
 
struct Clientes
{
    char nombre[65], direccion[65];
} cliente1, cliente2;

int main()
{
    cout<<"Empleado: \n";
    cout<<"Nombre: "<<empleado1.nombre<<" Direccion: "<<empleado1.direccion<<" Telefono: "<<empleado1.telefono<<"\n";
    cout<<"Nombre: "<<empleado2.nombre<<" Direccion: "<<empleado2.direccion<<" Telefono: "<<empleado2.telefono<<"\n";
    cout<<"Nombre: "<<empleado3.nombre<<" Direccion: "<<empleado3.direccion<<" Telefono: "<<empleado3.telefono<<"\n";
    
    cout<<"\n\nClientes: ";
    cout<<"\nNombre cliente 1: "; cin>>cliente1.nombre;
    cout<<"\nDireccion cliente 1: "; cin>>cliente1.direccion;
    cout<<"\nNombre cliente 2: "; cin>>cliente2.nombre;
    cout<<"\nDireccion cliente 2: "; cin>>cliente2.direccion;

    
    
    system("Pause");
    return 0;
}