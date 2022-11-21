/*
Dias de vacaciones:
0-3 años trabajados = 5 dias
4-10 años trabajados = 10 dias
11-100 años trabajados = 15 dias
*/


# include <iostream>
# include <ctime> //nos permite acceder al año actual
using namespace std; 

struct Empleados
{
    char nombre[65];
    int anoIngreso;
    int anoTrabajado;
    int diasVacaciones;
}
empleado[3]={{"Leo"},{"May"},{"Memo"}};

int main()
{  
    time_t t=time(NULL);//Variable de tipo time_t 
    tm* timerPtr=localtime(&t);//Se crea un puntero que obtendra el tiempo del sistema
    int anoActual=timerPtr->tm_year+1900;//Se obtiene el año actual pero hay que sumarle 1900 por que ese es el 0 para C++

    cout<<"Por favor ingresa el a"<<char(164)<<"o de ingreso de cada empleado: \n"; //"<<char(164)<<" lo utilizo para que se vea la ñ

    for (int i = 0; i < 3; i++)
    {
        cout<<"A"<<char(164)<<"o ingreso de "<<empleado[i].nombre<<": ";
        cin>>empleado[i].anoIngreso;
        empleado[i].anoTrabajado=anoActual-empleado[i].anoIngreso;
        switch (empleado[i].anoTrabajado)
        {
        case 0 ... 3: //los 3 puntos significan rango (desde 0 hasta 3)
            empleado[i].diasVacaciones=5;
            break;
        case 4 ... 10: 
            empleado[i].diasVacaciones=10;
            break;
        case 11 ... 100: 
            empleado[i].diasVacaciones=15;
            break;
        }


    }
    cout<<"\n\nDias de vacaciones por empleado: \n";
    for (int i = 0; i < 3; i++)
    {
        cout<<"Al empleado "<<empleado[i].nombre<<" le corresponden: "<<empleado[i].diasVacaciones
        <<" dias de vacaciones, por sus "<<empleado[i].anoTrabajado<<" a"<<char(164)<<"os de trabajo.\n";

    }
    

    system("Pause");
    return 0;
}