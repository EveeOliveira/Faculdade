#include <iostream>

using namespace std;

bool pesquisa(int x[], int y){
    for(int i = 0; i < 10; i++){
        if(y == x[i]){
            return true;
        }
    }
    return false;
}

int main(){
    int conjunto[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int chave;

    cout << "Digite um valor qualquer: ";
    cin >> chave;

    cout << pesquisa(conjunto, chave);
}