# include <iostream>
# include <stdlib.h>
using namespace std; 

int main()
{
    
    char texto[4], texto1[2], texto2[2];
    int numero1, numero2, suma=0;
    cout<<"Por favor ingresa 4 numeros: \n";
    cin>>texto;
    texto1[0]=texto[0];
    texto1[1]=texto[1];
    texto1[2]='\0'; //se cierra con nulo 

    texto2[0]=texto[2];
    texto2[1]=texto[3];
    texto2[2]='\0'; //se cierra con nulo

    numero1=atoi(texto1);
    numero2=atoi(texto2);

    suma=numero1+numero2;

    cout<<"La suma de los dos numeros es: \n"<<suma<<"\n";

    system("Pause");
    return 0;
}