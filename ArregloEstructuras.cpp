# include <iostream>
using namespace std; 

struct Empleados
{
    char nombre[65], id[6];
}
empleado[2];

int main()
{   
    bool esNumero=true;
    
    cout<<"Por favor ingresa los datos de los empleados (El Id debe contener 6 numeros): \n";
    for (int i = 0; i < 2; i++)
    {   
        regresa:
        esNumero=true;
        cout<<"Empleado "<<(i+1)<<" Id: "; cin>>empleado[i].id;
        for (int j = 0; j < 6; j++)
        {
            if (int(empleado[i].id[j])<=47 || int(empleado[i].id[j])>=58)   //se extrae el numero ASCII del caracter para saber si esta en el rango de numeros
            {
                esNumero=false;
                cout<<"\nEl Id que ingresaste: "<<empleado[i].id<<" no es valido, Ingresalo nuevamente\n";
                goto regresa;
            }
            
        }
        cout<<"Empleado "<<(i+1)<<" Nombre: "; cin>>empleado[i].nombre;

    }
    
    for (int i = 0; i < 2; i++)
    {
        cout<<"\nId: "<<empleado[i].id<<"\nNombre: "<<empleado[i].nombre<<"\n\n";
    }
    
    
    system("Pause");
    return 0;
}