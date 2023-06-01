#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string t1, t2;
    int g1, g2;

    cout << "Escreva o nome do primeiro time: ";
    getline(cin, t1);
    cout << "Escreva o nome do segundo time: ";
    getline(cin, t2);
    cout << "Quantos gols o " << t1 << " fez? ";
    cin >> g1;
    cout << "Quantos gols o " << t2 << " fez? ";
    cin >> g2;

    if (g1 > g2) {
        cout << "O vencedor foi o " << t1;
    }
    else if (g2 > g1) {
        cout << "O vencedor foi o " << t2;
    }
    else{
        cout << "EMPATE!";
    }
    return 0;
}
