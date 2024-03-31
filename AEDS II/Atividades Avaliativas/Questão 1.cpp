#include <iostream>

using namespace std;

void imprime(int x){
    if (x > 0){
        cout << string(x, '*') <<endl;
        imprime(x-1);
        cout << string(x, '*') << endl;
    }
}

int main(){
    int num = 0;
    
    cout << "Digite um numero inteiro positivo qualquer: ";
    cin >> num;
    if (num < 0){
        cout << "Opcao invalida!" <<endl;
        return main();
    }
    imprime(num);

    return 0;
}