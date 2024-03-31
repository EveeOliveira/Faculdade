#include <iostream>

using namespace std;

bool pesquisa(int conjunto[], int inicio, int fim, int chave);

int main(){
    int conjunto[100];
    int chave;

    for(int i=0; i < 100; i++){
        conjunto[i] = i;
    }

    cout << "Digite um número qualquer:";
    cin >> chave;

    cout << pesquisa(conjunto, 0, 100-1 , chave);
}

bool pesquisa(int conjunto[], int inicio, int fim, int chave){
    
    if(inicio > fim){
        return false;
    }

    int meio = (inicio + fim)/2;

    if(conjunto[meio] == chave){
        return true;
    }
    else if(conjunto[meio] < chave){
        return pesquisa(conjunto, meio + 1, fim ,chave);
    }
    else{
        return pesquisa(conjunto, inicio, meio - 1, chave);
    }
}