#include <iostream>
#include "quicksort.h"

using namespace std;
int mitad(int arr[],int pinicial,int pfinal);
void ordenar (int arr[],int pinicial,int pfinal);

int main()
{
    int B[30],nT;
    cout<<"Ingrese el numero de elementos: ";
    cin>>nT;
    for (int k=0;k<nT;k++)
    {
        cout<<"Ingrese el #"<<k+1<<" : ";
        cin>>B[k];
    }
    ordenar(B,0,nT);
    for(int i=0; i<nT; i++)
    {
        cout<<"|"<<B[i]<<"|";
    }
    return 0;
}

