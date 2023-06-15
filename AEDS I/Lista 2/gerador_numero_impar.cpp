/*Escrever um algoritmo que gera e escreve os números 
ímpares entre 100 e 200.*/

#include <iostream>

using namespace std;

int main() {

    int inicio = 99; 
    
    cout << "Os numeros impares entre 100 e 200 sao:\n";
    
    // com a estrutura for
    /*for (int i = 100; i <= 200; i++) {
        if( i % 2 != 0) {
            cout << i << endl;
        }
    }*/

    // com a estrutura while
    /*while( inicio < 199){
        inicio += 2;
        cout << inicio <<endl;
    }*/

    // com a estrutura do-while
    do{
        inicio += 2;
        cout << inicio <<endl;
    } while (inicio < 199);

    return 0;
}
