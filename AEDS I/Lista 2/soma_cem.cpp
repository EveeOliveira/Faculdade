#include <iostream>

using namespace std;

int main() {

    int num;
    int cont = 0, soma = 0;
    float ma;

    cout << "Digite alguns numeros ate que sua soma totalize 100:\n";
    
    // com a estrutura do-while
    /*do{
        cin >> num;

        //soma dos valores de entrada.
        soma += num;

        //quantidade de números.
        cont++;

        //quanto falta para 100.
        cout << "Faltam " << 100 - soma << " para 100." <<endl;
    } while (soma != 100);*/

    // com a estrutura while
    /*while(soma != 100){
        cin >> num;

        //soma dos valores de entrada.
        soma += num;

        //quantidade de números.
        cont++;

        //quanto falta para 100.
        cout << "Faltam " << 100 - soma << " para 100." <<endl;
    }*/

    // com a estrutura for
    for(int i = 0; soma != 100; i++){
        cin >> num;

        //soma dos valores de entrada.
        soma += num;

        //quantidade de números.
        cont++;

        //quanto falta para 100.
        cout << "Faltam " << 100 - soma << " para 100." <<endl;
    }

    //média aritmética.
    ma = soma/cont;

    cout << "CHEGAMOS EM 100!\n";
    cout << "Foram usados " << cont << " numeros." <<endl;
    cout << "A media entre os numeros e de " << ma <<endl;

    return 0;
}
