# include <iostream>
using namespace std;

void pedirDatos(float& numero1, float& numero2); //& se utiliza para pasar parametros por referencia (Se crea un vinculo entre las variables)
void mostrarDatos(float numero1, float numero2);
void intercambioDatos(float *dirnumero1, float *dirnumero2); //* se pasa un puntero

int main()
{
    float numero1, numero2;
    pedirDatos(numero1,numero2);
    cout<<"\n-----DATOS ORIGINALES-----\n";
    mostrarDatos(numero1, numero2);
    intercambioDatos(&numero1,&numero2); //Con & paso las direcciones de memoria
    cout<<"\n-----DATOS INTERCAMBIADOS-----\n";
    mostrarDatos(numero1, numero2);

    system("pause");
    return 0;
}

void pedirDatos(float& numero1, float& numero2)
{
    cout<<"Por favor ingresa el numero 1: "; cin>>numero1;
    cout<<"Por favor ingresa el numero 2: "; cin>>numero2;
}

void mostrarDatos(float numero1, float numero2)
{
    cout<<"Numero 1: "<<numero1<<"   Direccion de memoria:"<<&numero1<<"\n";
    cout<<"Numero 2: "<<numero2<<"   Direccion de memoria:"<<&numero2<<"\n";
}

void intercambioDatos(float *dirnumero1, float *dirnumero2)
{
    float auxiliar;
    auxiliar=*dirnumero1;
    *dirnumero1=*dirnumero2;
    *dirnumero2=auxiliar;
}