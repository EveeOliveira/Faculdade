#include <iostream>

using namespace std;

int fatorial (int x) {
    int cont = 0, fat = 1;
    do{
        cont++;
        fat = fat * cont;
    }while (cont < x);

    return fat;
}

int main(){
    int num;
    cout << "Digite um numero inteiro qualquer: ";
    cin >> num;

    cout << fatorial(num);

    return 0;
}
