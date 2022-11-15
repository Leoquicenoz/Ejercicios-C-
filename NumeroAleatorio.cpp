#include <iostream>
#include <time.h>
using namespace std; 

int main()
{
    int numero, aleatorio, contador=0;

    srand(time(NULL)); //Prepara al sistema para generar un numero aleatorio
    aleatorio=1+rand()%100;  //se fija el rango entre 1 y 100 para el numero aleatorio
    do
    {
        cout<<"Por favor ingresa un numero entre 1 y 100: \n"<<aleatorio<<"\n";
        cin>>numero;
        if (numero<aleatorio)
        {
            cout<<"El numero ingresado es menor que el numero aleatorio \n";
        }
        if (numero>aleatorio)
        {
            cout<<"El numero ingresado es mayor que el numero aleatorio \n";
        }
        contador++;
    } while (numero!=aleatorio);

    cout<<"Felicidades!! encontraste el numero aleatorio despues de "<<contador<<" intentos\n";
   
    system("Pause");
    return 0;
}