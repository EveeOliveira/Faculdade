#include <iostream>
#include <string>

using namespace std;

void imprime(string x, int y){
    if (y < 0){
        return;
    }

    cout << x[y];

    imprime(x, y-1);
}

int main(){
    string palavra;
    int tamanho;

    cout << "Digite uma palavra qualquer: ";
    cin >> palavra;

    tamanho = palavra.length();

    cout << "O inverso da palavra é: ";
    imprime(palavra, tamanho);
}