/*Escrever um algoritmo que receba a idade de dez pessoas e que calcule e
mostre a quantidade de pessoas com idade maior ou igual a 18 anos.*/

#include <iostream>

using namespace std;

int main() {

    //int idade[10];
    int maiores = 0, cont = 0, idade;

    cout << "Escreva as idades de 10 pessoas distintas:\n";

    // com a estrutura for
    /*for (int i = 0; i < 10; i++) {
        cin >> idade[i];
        
        // contador de pessoas com idade = ou > que 18
        if (idade[i] >= 18) {
            maiores++;
        }
    }*/

    // com a estrutura while
    /*while(cont < 10){
        cin >> idade;
        
        // contador de pessoas com idade = ou > que 18
        if (idade >= 18) {
            maiores++;
        }
        cont++;
    }*/

    // com a estrutura do-while
    do{
        cin >> idade;
        
        // contador de pessoas com idade = ou > que 18
        if (idade >= 18) {
            maiores++;
        }
        cont++;
    } while(cont < 10);
    
    cout << "O numero de pessoas com a idade maior ou igual a 18 e " << maiores;

    return 0;
}
