# include <iostream>
using namespace std; 

int dato1, dato2;

void pideDatos();
int retornaMultiplicacion(int a, int b);
void muestraMultiplicacion(int a, int b);

int main ()
{
    int resultado;
    pideDatos();
    resultado= retornaMultiplicacion(dato1, dato2);
    cout<<"\nEl resultado es: "<<resultado<<"\n";
    muestraMultiplicacion(dato1, dato2);

    system ("pause");
    return 0;
}

void pideDatos()
{
    regresar:
    cout<<"Por favor ingresa dos numeros positivos\n"; 
    cout<<"Numero 1: "; cin>>dato1;
    if (dato1<0)
    {
        cout<<"El numero tiene que ser positivo";
        goto regresar;
    }
   
    cout<<"Numero 2: "; cin>>dato2;
    if (dato2<0)
    {
        cout<<"El numero tiene que ser positivo";
        goto regresar;
    }
}

int retornaMultiplicacion(int a, int b)
{
    int resultado;
    resultado=a*b;
    return resultado;
    //Tambien se podria realizar de la siguiente forma: return a*b;
}

void muestraMultiplicacion(int a, int b)
{
    int resultado;
    resultado=a*b;
    cout<<"Este es el resultado de la multiplicacion: "<<resultado<<"\n";

}

