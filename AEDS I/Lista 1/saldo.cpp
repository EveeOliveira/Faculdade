#include <iostream>

using namespace std;

int main() {

    float num, saldo, debito, credito, tot;

    cout << "Qual o numero da conta? ";
    cin >> num;
    cout << "Qual o valor do saldo em conta? ";
    cin >> saldo;
    cout << "O valor do debito? ";
    cin >> debito;
    cout << "O valor do credito? ";
    cin >> credito;
    tot = saldo - debito + credito;

    cout << "O seu saldo atual é de " << tot << " reais.\n";

    if (tot >= 0) {
        cout << "SALDO POSITIVO!";
    } 
    else {
        cout << "SALDO NEGATIVO!";
    }
    return 0;
}
