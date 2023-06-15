/*Escrever um algoritmo que leia um valor para uma variável N de 1 a 10 e
calcule a tabuada de N.*/

#include <iostream>

using namespace std;

int main() {

    int n;
    int cont = 0;

    cout << "Escolha um numero entre 1 e 10 \n";
    cin >> n;

    // validador da entrada.
    if (n > 10 or n < 1) {
        cout << "O NUMERO NAO E VALIDO!";
    }
    
    else {
        cout << "TABUADA DO " << n << endl;

        //com a estrutura do-while
        /*do{
            cout << cont << " X " << n << " = " << cont*n << endl;
            cont++;
        } while (cont <=10);*/

        //com a estrutura while
        /*while(cont <= 10) {
            cout << cont << " X " << n << " = " << cont*n << endl;
            cont++;
        }*/

        //com a estrutura for
        for(int i = 0; i <= 10; i++){
            cout << i << " X " << n << " = " << i*n << endl;
        }
    }

    return 0;
}
