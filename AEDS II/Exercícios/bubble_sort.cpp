#include <iostream>

using namespace std;

void bubble_sort(int x[], int y){

    for(int i = 0; i < y; i++)
        for(int j = i; j < y; j++)
            if(x[i] > x[j]){
                int aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
}

void imprime(int x[], int y){
    for(int i = 0; i < y; i++){
        cout << x[i] << " ";
    }
}

int main(){
    int conjunto[10] = {10, 7, 6, 3, 8, 9, 5, 2, 1, 4};
    int tamanho = sizeof(conjunto)/sizeof(conjunto[0]);
    bubble_sort(conjunto, tamanho);
    imprime(conjunto, tamanho);
}