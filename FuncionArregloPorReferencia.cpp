# include <iostream>
using namespace std;

int *calculaRetorno (int, int); //El asterisco indica que se retornará un arreglo
void calcularReferencia (int,int,int&,int&);

int main()
{
    int num1, num2, suma=0, multip=0;

    cout<<"Por favor ingresa dos numeros: \n"; 
    cout<<"Numero 1:"; cin>>num1;
    cout<<"Numero 2:"; cin>>num2;

    calcularReferencia(num1, num2, suma, multip);
/*
    int *resultado=calculaRetorno(num1,num2);
    suma=resultado[0];
    multip=resultado[1];
*/

    cout<<"El resultado de la suma es: \n"<<suma<<"\n";
    cout<<"El resultado de la multiplicacion es: \n"<<multip<<"\n";

    system("Pause");
    return 0;
}

void calcularReferencia (int num1,int num2,int& suma,int& multiplicacion)
{
    suma=num1+num2;
    multiplicacion=num1*num2;
}


int *calculaRetorno (int num1, int num2)
{
    int suma=num1+num2;
    int multiplicacion=num1*num2;
    int *resultado;
    resultado[0]=suma;
    resultado[1]=multiplicacion;
    return resultado;

}