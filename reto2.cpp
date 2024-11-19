#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int cantidad;
    cout<<"ingrese la cantidad de lanzamientos: "; cin>>cantidad;
    cout<<"-------------------------------------"<<endl;
    double probabilidadCara=0.7;
    for(int i=0; i<cantidad; i++)
    {
        double probabilidad=static_cast<double>(rand())/RAND_MAX;//genera numeros entre 0 a 1 , ademas RAND_MAX es el número máximo que devuelve la función rand()
        if(probabilidad<probabilidadCara)//si es menor del 0.7--70% será cara de lo contrario los 0.8, .09, 1 % será cruz.
        {
            cout<<"cara"<<endl;
        }
        else
        {
            cout<<"cruz"<<endl;
        }
    }
    return 0;
}