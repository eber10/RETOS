#include<iostream>
using namespace std;
int main()
{
    int diaNac, mesNac, anioNac, diaAct, mesAct, anioAct, edad;
    cout<<"--------------------"<<endl;
    cout<<" FECHA DE NACIMIENTO"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"Dia: "; cin>>diaNac;
    cout<<"Mes: "; cin>>mesNac;
    cout<<"Anio: "; cin>>anioNac;
    cout<<"--------------------"<<endl;
    cout<<"     FECHA ACTUAL   "<<endl;
    cout<<"--------------------"<<endl;
    cout<<"Dia: "; cin>>diaAct;
    cout<<"Mes: "; cin>>mesAct;
    cout<<"Anio: "; cin>>anioAct;
    cout<<"---------------------"<<endl;
    edad=(anioAct-anioNac);
    if(mesAct<=mesNac && diaAct<diaNac)
    {
        edad--;
    }
    cout<<"Edad: "<<edad<<endl;
    return 0;
}