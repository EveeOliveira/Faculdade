#include <iostream>
using namespace std;

int main()
{
    float milimetro (int x, int y);
    int n=0, d=0;

    cout << "CONVERTENDO POLEGADA FRACIONARIA EM MILIMETRO" << endl;
    cout << "Qual o valor do numerador: ";
    cin >> n;
    cout << "Qual o valor do denominador(!= 0): ";
    cin >> d;

    for (int i; d == 0; i++)
    {
        cout << "ENTRADA INVALIDA! O DENOMINADOR NAO PODE SER IGUAL A ZERO!" << endl;
        cout << "Qual o valor do denominador(!= 0): ";
        cin >> d;
    }

    cout << n << "/" << d << " em milimetros e igual a " << milimetro(n,d) << "mm";

    return 0;
}

float milimetro (int x, int y)
{
    float m;
    m = (x * 25.4) / y;
    return m;
}
