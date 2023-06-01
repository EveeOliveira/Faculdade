#include <iostream>

using namespace std;

int main() {

    int h1, h2, m1, m2, soma, produto;

    cout << "Qual a idade do primeiro homem?";
    cin >> h1;
    cout << "Qual a idade do segundo homem?";
    cin >> h2;
    cout << "Qual a idade da primeira mulher?";
    cin >> m1;
    cout << "Qual a idade da segunda mulher?";
    cin >> m2;

    if (h1 > h2) {
        if (m1 > m2){
            soma = h1 + m2;
            produto = h2 * m1;
        }
        else {
            soma = h1 + m1;
            produto = h2 * m2;
        }
    }
    else {
        if (m1 > m2) {
            soma = h2 + m2;
            produto = h1 * m1;
        }
        else {
            soma = h2 + m1;
            produto = h1 * m2;
        }
    }

    cout << "A soma das idades do homem mais velho e a mulher mais nova:" << soma << "\n";
    cout << "O produto das idades do homem mais novo e a mulher mais velha: " << produto;
    return 0;
}
