#include <iostream>

using namespace std;

int main() {

    int num;
    cout << "Digite um numero inteiro qualquer: ";
    cin >> num;

    if ((num % 2) == 0) {
        cout << "O numero é PAR!";
    }
    else{
        cout << "O numero é IMPAR!";
    }
    return 0;
}
