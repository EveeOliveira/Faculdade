#include <iostream>
using namespace std;

int main()
{
    int num [8] = {10, 15, 20, 25, 30, 35, 40, 45};
    int n=0, cont=0;

    cout << "Digite um numero inteiro qualquer:\n";
    cin >> n;

    for (int i = 0; i < 8; i++)
    {
        if (n == num[i])
        {
            cout << "O numero " << n << " faz parte do vetor.\n";
            cout << "Ele ocupa a posicao " << i+1 << "." <<endl; //posição de 1 a 8
        }
        else if (n != num[i])
        {
            cont++;
            if (cont == 8)
            {
                cout << "O numero " << n << " nao faz parte do vetor.";
            }
        }
    }

    return 0;
}
