#include <iostream>
using namespace std; 

int main()
{
    int opcion;
    float saldo=1000, ingreso, egreso;
    regreso:
    cout<<"Hola! Bienvenido al Banco\n";
    cout<<"Por favor seleccions una de las siguientes opciones:\n";
    cout<<"1. Ingreso de Dinero\n";
    cout<<"2. Retirar Dinero\n";
    cout<<"3. Salir\n";
    cin>>opcion;
    
   switch (opcion)
   {
   case 1:
        cout<<"Cuanto dinero vas a ingresar?\n";
        cin>>ingreso;
        saldo+=ingreso;
        cout<<"Actualmente tienes en el banco $"<<saldo<<"\n";
        goto regreso;
    
   case 2:
        cout<<"Cuanto dinero vas a retirar?\n";
        cin>>egreso;
        if (saldo>=egreso)
        {
            saldo-=egreso;
            cout<<"Actualmente tienes en el banco $"<<saldo<<"\n";
        }
        else
        {
            cout<<"No tienes sificiente saldo, actualmente tienes $ "<<saldo<<"\n";
        }
        goto regreso;
        
   case 3:
        break;
   default:
        goto regreso;
        
   }

    
    

    system("Pause");
    return 0;
}