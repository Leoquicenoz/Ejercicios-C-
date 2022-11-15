#include <iostream>
using namespace std; 

int main()
{
    int arreglo[100], tamano, mayor=0;

    do
    {
        cout<<"Por favor ingresa el tamaño del arreglo (Mas de 1 y menos de 99): \n";
        cin>>tamano;
    } while ((tamano<1) || (tamano>100));

    for (int i = 0; i < tamano; i++)
    {
        cout<<"Ingresa por favor el valor del elemento "<<(i+1)<<": \n";
        cin>>arreglo[i];

        if (arreglo[i]>mayor)
        {
            mayor=arreglo[i];
        }    
    }
    
    cout<<"\nEl mayor numero del arreglo es: "<<mayor<<"\n";

    system("Pause");
    return 0;
}