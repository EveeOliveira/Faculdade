#include <iostream>
using namespace std;

int main()
{
    float horas_t=0, s_hora=0;
    float s_liquido (float x, float y);
    
    cout << "Digite suas horas trabalhadas:\n";
    cin >> horas_t;
    cout << "Digite seu salario por hora:\nR$";
    cin >> s_hora;

    cout << "Seu salario bruto e igual a : R$" << horas_t * s_hora << " reais." <<endl;
    cout << "Seu salario liquido e igual a : R$" << s_liquido(horas_t, s_hora) << " reais." << endl;

    return 0;
}

float s_liquido (float x, float y)
{
    float s_bruto = x * y;
    float desconto=0, l;
    if (s_bruto > 100 and s_bruto <= 200)
    {
        desconto = (10 * s_bruto)/100;
    }
    else if (s_bruto > 200)
    {
        desconto = (20 * s_bruto)/100;
    }
    l = s_bruto - desconto;
    return l;
}