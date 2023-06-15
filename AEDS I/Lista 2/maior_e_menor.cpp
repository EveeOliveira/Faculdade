/*Escreva um algoritmo que lê 15 valores reais, encontra o maior e o menor
deles e mostra o resultado.*/

#include <iostream>

using namespace std;

int main() {

    //const int tamanho = 15; 
    //float num[tamanho];
    float menor, maior, num, primeiro;
    int cont = 1;

    cout << "Escolha 15 numeros reais quaisquer:\n";
    
    // para as estruturas do-while e while
    cout << "Digite o primeiro numero:\n";
        cin >> primeiro;

        maior = primeiro;
        menor = primeiro;

    do{
        cout << "Digite o " << cont + 1 << " numero:\n";
        cin >> num;

        // maior
        if (num > maior) {
            maior = num;
        }
        // menor
        if (num < menor) {
            menor = num;
        }
        
        cont++;
    } while(cont < 15);

    /*while(cont < 15){
        cout << "Digite o " << cont + 1 << " numero:\n";
        cin >> num;

        // maior
        if (num > maior) {
            maior = num;
        }
        // menor
        if (num < menor) {
            menor = num;
        }
        
        cont++;
    }*/
    
    // com a estrutura for
    /*for (int i = 0; i < 15; i++) {
        cin >> num[i];
    }

    maior = num[0];
    menor = num[0];

    for(int i = 0; i < 15; i++) {
        //maior
        if (num[i] > maior) {
            maior = num[i];
        }

        //menor
        if (num[i] < menor) {
            menor = num[i];
        }
    }*/

    cout << "O maior numero entre os 15 e " << maior << endl;
    cout << "O menor numero entre os 15 e " << menor << endl;

    return 0;    
}
