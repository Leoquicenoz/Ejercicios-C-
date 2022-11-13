#include <iostream>

int main ()
{
    float n1,n2,suma,resta,multiplicacion,division;
    std::cout<<"Ingresa el primer numero por favor: ";
    std::cin>>n1;
    std::cout<<"Ingresa el psegundo numero por favor: ";
    std::cin>>n2;
    suma=n1+n2;
    resta=n1-n2;
    multiplicacion=n1*n2;
    division=n1/n2;
    std::cout<<"El resultado de la suma es: "<<suma<<"\n";   
    std::cout<<"El resultado de la resta es: "<<resta<<"\n";   
    std::cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<"\n";   
    std::cout<<"El resultado de la division es: "<<division<<"\n";   
    system("pause");
    return 0; 
}