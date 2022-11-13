#include <iostream>

int main ()
{
    int numero;
    std::cout<<"Ingresa un numero entero por favor: ";
    std::cin>>numero;
    if (numero%2==0)
    {
        std::cout<<"El numero que Ingresaste es: "<<numero<<" Y es Par\n"; 
    }
    else
    {
        std::cout<<"El numero que Ingresaste es: "<<numero<<" Y es Impar\n"; 
    }
    system("pause");
    return 0; 
}