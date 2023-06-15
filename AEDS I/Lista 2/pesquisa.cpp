#include <iostream>

using namespace std;

int main() {
    
    int idade, cont = 1, m = 0;
    string sexo, olhos, cabelos;

    do{
        cout << "Analise da pessoa numero " << cont <<endl;
        cout << "Qual o sexo? [M para masculino/ F para feminino]\n";
        cin >> sexo;
        cout << "Qual a cor dos olhos? [A para azuis/ V para verdes/ C para castanhos]\n";
        cin >> olhos;
        cout << "Qual a cor dos cabelos? [L para louros/ C para castanhos/ P para pretos]\n";
        cin >> cabelos;
        cout << "Qual a idade?\n";
        cin >> idade;

        if (sexo == "F" and idade >= 18 && idade <= 35 and olhos == "V" and cabelos == "L"){
            m++;
        }

        cont++;
    } while(cont <= 500);

    cout << "A analise nos diz que existe(m) " << m << " pessoa(s) com as caracteristicas necessarias.";

    return 0;
}
