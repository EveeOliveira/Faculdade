#include <iostream>
#include <string>

using namespace std;

int main() {

    float nota1, nota2, nota3, me, ma;
    string c;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite a terceira nota: ";
    cin >> nota3;

    me = (nota1 + nota2 + nota3)/3;
    ma = (nota1 + (nota2 * 2) + (nota3 * 3) + me)/7;

    if (ma >= 9) {
        c = "A, APROVADO!";
    }
    else if (ma >= 7.5 and ma < 9) {
        c = "B, APROVADO!";
    }
    else if (ma >= 6 and ma < 7.5) {
        c = "C, APROVADO!";
    }
    else if (ma >= 4 and ma < 6) {
        c = "D, REPROVADO!";
    }
    else if (ma < 4) {
        c = "E, REPROVADO!";
    }

    cout << "Suas notas sao: ("<< nota1 <<", "<< nota2 <<", "<<nota3<<")\n";
    cout << "A media dos exercicios é " << me << "\n";
    cout << "A media de aproveitamento é " << ma << "\n";
    cout << c;


    return 0;
}
