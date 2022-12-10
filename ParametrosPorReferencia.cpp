# include <iostream>
using namespace std;

void cambiarValor (int&, int&);




int main()
{
    int num1, num2;
    cout<<"Por favor ingresa el valor del numero 1: \n"; cin>>num1;
    cout<<"Por favor ingresa el valor del numero 2: \n"; cin>>num2;

    cout<<"Los numeros ingresados fueron: \n"<<"Numero 1: "<<num1<<"\n"<<"Numero 2: "<<num2<<"\n";

    cambiarValor(num1,num2);
    cout<<"Los nuevos numeros son: \n"<<"Numero 1: "<<num1<<"\n"<<"Numero 2: "<<num2<<"\n";

    system("Pause");
    return 0;
}

void cambiarValor (int& val1, int& val2)
{
    val1=10;
    val2=20;
}