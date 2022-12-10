# include <iostream>
# include <string.h>
# include <typeinfo> 

using namespace std; 


//Se declaran clases de variables (TIPO1 y TIPO2 son clases de variables)
template <class TIPO1, class TIPO2> //Se declaran 2 templates

void concatenaOSuma(TIPO1 dato1, TIPO2 dato2);

int main()
{
    int varEntero=5;
    float varFlotante=5.55;
    char varChar='v';
    concatenaOSuma(varChar, varFlotante);

    system("pause");
    return 0;
}

template <class TIPO1, class TIPO2> 

void concatenaOSuma(TIPO1 dato1, TIPO2 dato2)
{   //Typeid envia una letra dependiendo de que tipo de dato sea
    if (string (typeid(dato1).name()) == "c" || string (typeid(dato2).name()) == "c") //Se convierte el dato a string
    {
        cout<<"La concatenacion es: "<<dato1<<dato2<<"\n";
    }
    else
    {
        cout<<"La suma es: "<<(dato1+dato2)<<"\n";
    }
    

}









