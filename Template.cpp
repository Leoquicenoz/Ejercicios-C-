# include <iostream>
using namespace std; 


template <class elTipo>
void mostrarNumero (elTipo numero);

int main()
{
    int numEntero=5;
    float numFloat=5.5556;
    double numDoble=54.5555685;

    mostrarNumero(numEntero);
    mostrarNumero(numFloat);
    mostrarNumero(numDoble);

    system("pause");
    return 0;

}

template <class elTipo>

void mostrarNumero (elTipo numero)
{
    cout<<"Mostrar numero de cualquier tipo: "<<numero<<"\n";
}