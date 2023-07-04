#include <iostream>
using namespace std;

int main()
{
    float equacao (float a, float b);
    float a = 0.0f, b = 0.0f;
    
    cout << "Sobre a equacao de primeiro grau (a*x + b = 0)" << endl;
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;

    if (a != 0)
    {
        cout << "A equacao é DETERMINADA" << endl;
        if (b == 0)
        {
            cout << "A solucao e igual a 0";
        }
        else
        {
            cout << "A solucao e igual a " << equacao(a,b);
        }
    }
    else if (a == 0 and b != 0)
    {
        cout << "A equacao é IMPOSSIVEL" << endl;
    }
    else if (a == 0 and b == 0)
    {
        cout << "A equacao é INDETERMINADA" << endl;
        cout << "Possue solucoes infinitas";
    }
    return 0;
}

float equacao (float a, float b)
{
    float x;
    x = -b / a;
    return x;
}