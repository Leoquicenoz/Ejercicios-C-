#include <iostream>
using namespace std; 

int main()
{
    int numeros[100], n;

    do
    {
        cout<<"Por favor ingresa la cantidad de elementos que quieres para tu arreglo (Mas de 1 y menos de 99): \n";
        cin>>n;
    } while ((n<1) || (n>100));

    for (int i = 0; i < n; i++)
    {
        cout<<"Ingresa por favor el valor del elemento "<<(i+1)<<": \n";
        cin>>numeros[i];
    }
    
     for (int i = 0; i < n; i++)
    {
        cout<<(i+1)<<"="<<numeros[i]<<"\n";
        cin>>numeros[i];
    }

    system("Pause");
    return 0;
}