#include <iostream>
using namespace std; 

int main()
{
    int matriz[100][100], filas,columnas;
    
    cout<<"Por favor ingresa cuantas filas tendra la matriz: \n";
    cin>>filas;
    cout<<"Por favor ingresa cuantas columnas tendra la matriz: \n";
    cin>>columnas;

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<"Ingresa por favor el valor de la posicion "<<(i+1)<<","<<(j+1)<<": \n";
            cin>>matriz[i][j];
        }
    }

    cout<<"\n\n";

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<matriz[i][j]<<" ";
        }

        cout<<"\n";
    }
    cout<<"\n\n";
    system("Pause");
    return 0;
}