#include <iostream>
#include <string>

using namespace std;

int main() {

    int n, pos, neg;
    float maior, menor, soma, pp, pn, ma;
    string continuar;

    do{
            
        //quantidade de números a serem analisados.
        do {
            cout << "Quantos numeros deseja analisar? (numeros positivos > 20)\n";
            cin >> n;

            if (n >= 20 or n < 1) {
                cout << "QUANTIDADE INVALIDA!\n";
            }
        } while (n >= 20 or n < 1);

        //quais números serão analisados.
        float num[n];

        cout << "Digite o(s) " << n << " numero(s):\n";
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }

        maior = num[0];
        menor = num[0];
        soma = 0;
        pos = 0;
        neg = 0;

        for(int i = 0; i < n; i++) {

            // maior
            if (num[i] > maior) {
                maior = num[i];
            }

            // menor
            if (num[i] < menor) {
                menor = num[i];
            }

            // soma dos valores
            soma+=num[i];

            // positivos
            if(num[i] >= 0) {
                pos++;
            }
            // negativos
            else{
                neg++;
            }
        }

        //média aritmética.
        ma = soma/n;

        //porcentagem de positivos.
        pp = (pos * 100)/n;

        //porcentagem de negativos.
        pn = (neg * 100)/n;

        cout << "O maior valor e " << maior << " e o menor " << menor <<endl;
        cout << "A soma dos valores e igual a " << soma <<endl;
        cout << "A media aritmetica dos valores e igual a " << ma <<endl;
        cout << "A porcentagem de numeros negativos e de " << pn << "%." <<endl;
        cout << "A porcentagem de numeros positivos e de " << pp << "%." <<endl;

        // continuar análise.
        do{
            cout << "Deseja continuar?[S/N]:\n";
            cin >> continuar;

            if (continuar != "S" and continuar != "N") {
                cout << "OPCAO INVALIDA!\n";
            }
        } while (continuar != "S" and continuar != "N");

    } while (continuar == "S");
    return 0;
} 
