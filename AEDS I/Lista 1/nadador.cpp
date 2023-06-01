#include <iostream>

using namespace std;

int main () {

    int idade;

    cout << "Qual a idade do nadador? ";
    cin >> idade;

    if (idade >= 5 and idade <= 7) {
        cout << "Categoria: INFANTIL A";
    }
    else if (idade >= 8 and idade <= 10) {
        cout << "Categoria: INFANTIL B";
    }
    else if (idade >= 11 and idade <= 13) {
        cout << "Categoria: JUVENIL A";
    }
    else if (idade >= 14 and idade <= 17) {
        cout << "Categoria: JUVENIL B";
    }
    else if (idade >= 18) {
        cout << "Categoria: ADULTO";
    }
    else {
        cout << "Não pode competir!";
    }

    return 0;
}
