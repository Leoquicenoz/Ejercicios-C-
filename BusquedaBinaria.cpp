# include <iostream>
using namespace std; 

int main()
{
    int lista[]={1,2,3,4,5}, valor,contador=0, inferior, superior, medio, tam;
    bool encontrado=false;

    regresa:
    tam=sizeof(lista)/sizeof(*lista); //sizeof entrega el tamaño pero como cada elemento es entero y ocupa 4 espacios de memoria, hay que dividirlos por ese tamaño de memoria que ocupa
    inferior=0;
    superior=tam;
    contador=0;

    cout<<"Ingresa por favor un valor de la siguiente lista: \n";
for (int i = 0; i < 5; i++)
{
    cout<< lista[i]<<", ";
}

cout<<"\nIngresa el valor: ";
cin>>valor;

while ((inferior<=superior) && contador<tam)
{
    medio=(inferior+superior)/2;
    if (lista[medio]==valor)
    {
        encontrado=true;
        break;
    }

    if (lista[medio]>valor)
    {
        superior=medio;
        medio=(inferior+superior)/2;
    }

     if (lista[medio]<valor)
    {
        inferior=medio;
        medio=(inferior+superior)/2;
    }
    
    contador++;
}

if (encontrado==false)
{
    cout<<"Ese numero no esta en la lista, ingresa un nuevo valor\n";
    goto regresa;
}

if (encontrado==true)
{
    cout<<"Felicidades, el numero fue encontrado en la posicion: "<<(medio+1)<<"\n";
}


    system("Pause");
    return 0;
}