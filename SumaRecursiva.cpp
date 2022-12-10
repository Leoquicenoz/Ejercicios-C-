# include <iostream>
using namespace std;

int sumaRecursiva(int numero);

int main()
{
    int n;
    regresar:
    cout<<"Por favor ingresa un numero mayor a 1: "; cin>>n;
    if (n<1)
    {
        cout<<"El numero "<<n<<" es menor a 1, intenta nuevamente\n";
        goto regresar;
    }
    cout<<"Muy bien! la suma recursiva de "<<n<<" es: "<<sumaRecursiva(n)<<"\n";

    system("pause");
    return 0;

}

int sumaRecursiva(int numero)
{
    int suma=0;
    if (numero == 1)
    {
        suma=1;
    }
    else
    {
        suma=numero+sumaRecursiva(numero-1);
    }
    return suma;    
}