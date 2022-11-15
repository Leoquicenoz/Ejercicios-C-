#include <iostream>
using namespace std; 

int main()
{
    int numero, factorial=1;

    do
    {
        cout<<"Por favor ingresa un numero entero mayor a 0: \n";
        cin>>numero;
    } while (numero<=0);
    
  for (int i = 1; i <= numero; i++)
  {
    factorial*=i;
  }
  
     
    
    cout<<"El factorial del numero que ingresaste es: \n";
    cout<<factorial<<"\n";

    system("Pause");
    return 0;
}