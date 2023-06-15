/*Escrever um algoritmo em função de uma escolha, solicitar os dados
necessários para o cálculo da respectiva área. Enviar mensagem de erro se o
usuário escolher uma opção inexistente. Encerrar o algoritmo somente quando
selecionada a opção de finalização.*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int escolha;

    //do{
    //while(escolha != 5) {

    for (int i = 0; escolha != 5; i++){
    cout << "Escolha entre uma das opcoes:\n";
    cout << "\t[1] AREA DO TRIANGULO\n";
    cout << "\t[2] AREA DO QUADRADO\n";
    cout << "\t[3] AREA DO RETANGULO\n";
    cout << "\t[4] AREA DO CIRCULO\n";
    cout << "\t[5] FINALIZAR\n";
    cout << "Opcao: ";
    cin >> escolha;

    if (escolha == 1) {

        float base, altura;

        cout << "CALCULANDO A AREA DE UM TRIANGULO!\n";
        cout << "Qual o valor da base do triangulo? ";
        cin >> base;
        cout << "Qual é sua altura? ";
        cin >> altura;
        cout << "A area do triangulo e igual a " << (base*altura)/2 << endl;
    }
    else if (escolha == 2) {

        float lado;

        cout << "CALCULANDO A AREA DE UM QUADRADO!\n";
        cout << "Qual o valor de um dos lados do quadrado? ";
        cin >> lado;
        cout << "A area do quadrado e igual a " << pow (lado, 2) << endl;
    }
    else if (escolha == 3) {

        float base, altura;

        cout << "CALCULANDO A AREA DE UM RETANGULO!\n";
        cout << "Qual o valor da base do retangulo? ";
        cin >> base;
        cout << "Qual é sua altura? ";
        cin >> altura;
        cout << "A area do retangulo e igual a " << base*altura << endl;
    }
    else if (escolha == 4) {

        float raio;

        cout << "CALCULANDO A AREA DE UM CIRCULO!\n";
        cout << "Qual o valor de seu raio? ";
        cin >> raio;
        cout << "A area do circulo e igual a " << M_PI * pow(raio,2) << endl;
        
    }
    else if (escolha == 5) {
        cout << "FIM!";
    }
    else {
        cout << "OPCAO INVALIDA!\n";
    }
    }

    //}
    //} while(escolha != 5);

    return 0;
}
