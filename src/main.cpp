#include <iostream>
using namespace std;

#include "algoritmo.h"

int main(){
int * vetor;
int tamanho;
cout<<"Por favor digite o tamanho do vetor: ";
cin >> tamanho;
vetor = new int(tamanho);
for (int i = 0; i < tamanho; i++)
{
    cout<<"Valor da posição " << i<<": ";
    cin>>vetor[i];
}
cout<<"Desorganizado."<<endl;
for (int e = 0; e < tamanho; e++)
{
    cout<<vetor[e]<<endl;
}
cout<<"Organizado: "<<endl;

int *vet;
vet = ordena <int> (tamanho, vetor);
cout<<"[";
for (int e = 0; e < tamanho; e++)
{
    if (e < tamanho-1)
    {
        cout<<vet[e]<<",";    
    }
    else{
        cout<<vet[e]<<"]"<<endl;
    }
}



    return 0;
}