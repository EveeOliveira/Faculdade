/*Escrever um algoritmo que gera e escreve os números 
ímpares entre 100 e 200.*/

#include <iostream>

using namespace std;

int main() {
    
    cout << "Os numeros impares entre 100 e 200 sao:\n";
    
    for (int i = 100; i <= 200; i++) {
        if( i % 2 != 0) {
            cout << i << endl;
        }
    }

    return 0;
}
