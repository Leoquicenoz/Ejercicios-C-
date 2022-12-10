# include <iostream>
using namespace std;


const int tam=5; //Tamaño del vector, será constante

void cuadrado(int vector[]); //Cuando se pasa un vector, ya viene como referencia asi que no hay que poner &
void mostrarCuadrado(int vector[]);


int main()
{
    int vec[tam];
    cout<<"Por favor ingresa los "<<tam<<" numeros del vector: \n";

    for (int i = 0; i < tam; i++)
    {
        cout<<"Numero "<<i+1<<": "; 
        cin>>vec[i];
    }

    cuadrado(vec);

    cout<<"\nEstos son tus numeros elevados al cuadrado: \n";
    
    mostrarCuadrado(vec);

    


    system("pause");
    return 0;
}

void cuadrado(int vector[])
{
    for (int i = 0; i < tam; i++)
    {
        vector[i]*=vector[i];
    }
}

void mostrarCuadrado(int vector[])
{
    for (int i = 0; i < tam; i++)
    {
        cout<<"Numero "<<vector[i]<<"\n";
    }
}