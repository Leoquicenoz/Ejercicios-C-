# include <iostream>
using namespace std;

int main()
{
    int numeros[]={1,2,3,4,5}, *dir_numeros;
    dir_numeros=numeros;

    for (int i = 0; i < 5; i++)
    {
        cout<<"El numero: "<<numeros[i]<<" esta en la direccion de memoria: "<<dir_numeros++;
        cout<<"\n";
    }
    

    system ("pause");
    return 0;
}
