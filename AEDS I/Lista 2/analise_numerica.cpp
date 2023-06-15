#include <iostream>
#include <string>

using namespace std;

int main() {

    int n, pos = 0, neg = 0;
    float maior, menor, soma, pp, pn, ma;
    string continuar = "S";

    //do{
    //while(continuar == "S") {

    for (int i = 0; continuar == "S"; i++) {

        //quantidade de números a serem analisados.
        
        // com a estrutura do-while
        /*do {
            cout << "Quantos numeros deseja analisar? (numeros positivos > 20)\n";
            cin >> n;

            if (n >= 20 or n < 1) {
                cout << "QUANTIDADE INVALIDA!\n";
            }
        } while (n >= 20 or n < 1);*/

        // com a estrutura while
        /*cout << "Quantos numeros deseja analisar? (numeros positivos > 20)\n";
            cin >> n;

        while(n >=20 or n < 1){
            cout << "QUANTIDADE INVALIDA!\n";
            cout << "Quantos numeros deseja analisar? (numeros positivos > 20)\n";
            cin >> n;
        }*/

        // com a estrutura for
        cout << "Quantos numeros deseja analisar? (numeros positivos > 20)\n";
            cin >> n;
        
        for(int i=0; n >= 20 or n < 1; i++){
            cout << "QUANTIDADE INVALIDA!\n";
            cout << "Quantos numeros deseja analisar? (numeros positivos > 20)\n";
            cin >> n;
        }

        //quais números serão analisados.
        
        //com a estrutura for
        /*float num[n];

        cout << "Digite o(s) " << n << " numero(s):\n";
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }

        maior = num[0];
        menor = num[0];*/

        // para a estrutura while e do-while
        float primeiro, num;
        int cont = 1;

        cout << "Digite o primeiro numero:\n";
        cin >> primeiro;

        maior = primeiro;
        menor = primeiro;

        if(primeiro >= 0) {
            pos++;
        }
        else {
            neg++;
        } 

        //soma = 0;
        soma += primeiro;

        // com a estrutura for
        /*for(int i = 0; i < n; i++) {

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
        }*/

        // com a estrutura while
        /*while(cont < n){
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

            // soma dos valores
            soma+=num;

            // positivos
            if(num >= 0) {
                pos++;
            }
            // negativos
            else {
                neg++;
            }

            cont++;
        }*/

        // com a estrutura do-while
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

            // soma dos valores
            soma+=num;

            // positivos
            if(num >= 0) {
                pos++;
            }
            // negativos
            else {
                neg++;
            }

            cont++;
        } while(cont < n);

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

        // com a estrutura do-while
        /*do{
            cout << "Deseja continuar?[S/N]:\n";
            cin >> continuar;

            if (continuar != "S" and continuar != "N") {
                cout << "OPCAO INVALIDA!\n";
            }
        } while (continuar != "S" and continuar != "N");*/

        // com a estrutura while
        /*cout << "Deseja continuar?[S/N]:\n";
            cin >> continuar;
        while(continuar != "S" and continuar !="N"){
            cout << "OPCAO INVALIDA!\n";
            cout << "Deseja continuar?[S/N]:\n";
            cin >> continuar;
        }*/

        //com a estrutura for
        cout << "Deseja continuar?[S/N]:\n";
            cin >> continuar;
        for(int i = 0; continuar != "S" and continuar !="N"; i++){
            cout << "OPCAO INVALIDA!\n";
            cout << "Deseja continuar?[S/N]:\n";
            cin >> continuar;
        }

    
    }
    //}
    //} while (continuar == "S");
    return 0;
} 
