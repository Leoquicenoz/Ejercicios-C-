 # include <iostream>
using namespace std; 

struct Direccion
{
    char pais[65], estado[65], municipio[65];
    int calle;
};

struct Empleados
{
    char nombre[65], id[5];
    struct Direccion dirEmpleado;
}
e1={"Leonardo", "7777","Colombia", "Antioquia","Sabaneta", 75},
e2={"May","8898","Colombia","Bolivar","Cartagena", 5};


struct Clientes
{
    char nombre[65], telefono[15];
    struct Direccion dirCliente;
}c1,c2;

int main()
{   
    cout<<"Empleado 1: \n";
    cout<<"Nombre: "<<e1.nombre<<"\nId: "<<e1.id<<"\nPais: "<<e1.dirEmpleado.pais<<"\nEstado: "
    <<e1.dirEmpleado.estado<<"\nMunicipio: "<<e1.dirEmpleado.municipio<<"\nCalle: "<<e1.dirEmpleado.calle<<"\n\n";

    cout<<"Empleado 2: \n";
    cout<<"Nombre: "<<e2.nombre<<"\nId: "<<e2.id<<"\nPais: "<<e2.dirEmpleado.pais<<"\nEstado: "
    <<e2.dirEmpleado.estado<<"\nMunicipio: "<<e2.dirEmpleado.municipio<<"\nCalle: "<<e2.dirEmpleado.calle<<"\n\n";
    
   
    system("Pause");
    return 0;
}