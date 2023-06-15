/*Escrever um algoritmo que receba a idade de 15 pessoas e que calcule e
mostre:
a) A quantidade de pessoas em cada faixa etária;
b) A porcentagem de pessoas na primeira e na última faixa etária, com
relação ao total de pessoas:*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    //int idade[15];
    int pessoas = 0, idade;
    float cont_1 = 0, cont_2 = 0, cont_3 = 0, cont_4 = 0, cont_5 = 0;

    cout << "Escreva as idades de 15 pessoas distintas:\n";
    
    // com a estrutura for
    /*for (int i = 0; i < 15; i++) {
        cin >> idade[i];

        // contador de pessoas por faixa etaria
        if (idade[i] >= 0 and idade[i] <= 15){
            cont_1++;
        }
        else if (idade[i] > 15 and idade[i] <= 30) {
            cont_2++;
        }
        else if (idade[i] > 30 and idade[i] <= 45) {
            cont_3++;
        }
        else if (idade[i] > 45 and idade[i] <= 60) {
            cont_4++;
        }
        else {
            cont_5++;
        }
    }*/

    // com a estrutura while
    /*while (pessoas < 15){
        cin >> idade;

        // contador de pessoas por faixa etaria
        if (idade >= 0 and idade <= 15){
            cont_1++;
        }
        else if (idade > 15 and idade <= 30) {
            cont_2++;
        }
        else if (idade > 30 and idade <= 45) {
            cont_3++;
        }
        else if (idade > 45 and idade <= 60) {
            cont_4++;
        }
        else {
            cont_5++;
        }
        pessoas++;
    }*/

    // com a estrutura do-while
    do{
        cin >> idade;

        // contador de pessoas por faixa etaria
        if (idade >= 0 and idade <= 15){
            cont_1++;
        }
        else if (idade > 15 and idade <= 30) {
            cont_2++;
        }
        else if (idade > 30 and idade <= 45) {
            cont_3++;
        }
        else if (idade > 45 and idade <= 60) {
            cont_4++;
        }
        else {
            cont_5++;
        }
        pessoas++;
    } while (pessoas < 15);
    

    vector<string> lista_1 = {"0 a 15", "16 a 30", "31 a 45", "46 a 60", "acima de 60"};
    vector<float> lista_2 = {cont_1, cont_2, cont_3, cont_4, cont_5};


    for (size_t i = 0; i < lista_1.size(); i++) {
        cout << "O numero de pessoas de " << lista_1[i] << " e igual a " << lista_2[i] << endl;  
    }
    
    cout << "A porcentagem de pessoas da primeira e ultima faixa etaria em relacao ao total de pessoas e de " << ((cont_1 + cont_5) * 100) /15 << " porcento." << endl;

    return 0;
}
