# include <iostream>
using namespace std;

void entregaDinero (int,int& cien,int& cincuenta, int& veinte, int& diez, int& cinco, int& uno);

int main()
{
    int dinero;
    int cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, uno=0;

    cout<<"Por favor digita que cantidad de dinero deseas retirar: \n"; 
    cin>>dinero;
    
    
    entregaDinero (dinero,cien,cincuenta,veinte,diez,cinco,uno);
    
    cout<<"Retira tu dinero por favor: \n";
    cout<<"Cien: "<<cien<<"\n";
    cout<<"Cincuenta: "<<cincuenta<<"\n";
    cout<<"Veinte: "<<veinte<<"\n";
    cout<<"Diez: "<<diez<<"\n";
    cout<<"Cinco: "<<cinco<<"\n";
    cout<<"Uno: "<<uno<<"\n";

    system("Pause");
    return 0;
}

void entregaDinero (int dinero,int& cien,int& cincuenta, int& veinte, int& diez, int& cinco, int& uno)
{
    cien=dinero/100;
    dinero=dinero%100;
    cincuenta=dinero/50;
    dinero=dinero%50;
    veinte=dinero/20;
    dinero=dinero%20;
    diez=dinero/10;
    dinero=dinero%10;
    cinco=dinero/5;
    uno=dinero%5;
}
