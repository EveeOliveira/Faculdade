/*Escrever um algoritmo que receba a idade de dez pessoas e que calcule e
mostre a quantidade de pessoas com idade maior ou igual a 18 anos.*/

#include <iostream>

using namespace std;

int main() {

    int idade[10];
    int cont = 0;

    cout << "Escreva as idades de 10 pessoas distintas:\n";
    for (int i = 0; i < 10; i++) {
        cin >> idade[i];
        
        // contador de pessoas com idade = ou > que 18
        if (idade[i] >= 18) {
            cont++;
        }
    }

    cout << "O numero de pessoas com a idade maior ou igual a 18 e " << cont;

    return 0;
}
