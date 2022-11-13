#include <iostream>
using namespace std; 

int main()
{
    char letra;
    regresar:
    cout<<"Por favor ingresa una vocal: "; cin>>letra;

    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout<<"Bien hecho!! Presionaste una vocal \n";
        break;
    default:
        cout<<"Mal!! La letra que presionaste NO es una vocal \n";
        goto regresar;
        break;
    }

    system("Pause");
    return 0;
}