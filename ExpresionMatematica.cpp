#include <iostream>
#include <math.h>

int main ()
{
    float x, y, res, denominador;
    

    std::cout<<"Ingresa los siguientes datos por favor: ";
    std::cout<<"\nValor de X: ";  std::cin>>x;
    IngresaYDeNuevo:
    std::cout<<"\nValor de Y: ";  std::cin>>y;
    denominador=(pow(y,2)-1);
    if (denominador==0)
    {
        std::cout<<"\nEste numero no es valido, ingrese otro valor de Y"; std::cin>>y; 
        goto IngresaYDeNuevo;
    }
    else
    {
        res= (sqrt(x))/denominador;
    }

    std::cout<<"\nEste es el resultado de la Expresion Matematica: "<<res<<"\n";
    
    system("pause");
    return 0;

}