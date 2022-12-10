# include <iostream>
using namespace std;

int *calculaRetorno (int, int); //El asterisco indica que se retornará un arreglo

int main()
{
    int num1, num2, suma=0, multip=0;

    cout<<"Por favor ingresa dos numeros: \n"; 
    cout<<"Numero 1:"; cin>>num1;
    cout<<"Numero 2:"; cin>>num2;

    int *resultado=calculaRetorno(num1,num2);
    suma=resultado[0];
    multip=resultado[1];

    cout<<"El resultado de la suma es: \n"<<suma<<"\n";
    cout<<"El resultado de la multiplicacion es: \n"<<multip<<"\n";

    system("Pause");
    return 0;
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