#include <iostream>

using namespace std;

bool pesquisa(int conjunto[], int tam, int chave);

int main(){
    int conjunto[100];
    int chave;

    for(int i=0; i < 100; i++){
        conjunto[i] = i;
    }

    cout << "Digite um número qualquer:";
    cin >> chave;

    cout << pesquisa(conjunto, 100, chave);
}

bool pesquisa(int conjunto[], int tam, int chave){
    
    int inicio, meio, fim;

    inicio = 0;
    fim = tam - 1;

    while(inicio < tam){
        
        meio = (inicio + fim)/2;

        if(conjunto[meio] == chave){
            return true;
        }
        else if (conjunto[meio] > chave){
            fim = meio - 1;
        }
        else{
            inicio = meio + 1;
        }
    }
    return false;    
}