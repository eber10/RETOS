#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char letra[]={"colombia"};
    int longitud=strlen(letra);
    for(int i=0; i<longitud; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<letra[j];
        }
        cout<<endl;
    }
    return 0;
}