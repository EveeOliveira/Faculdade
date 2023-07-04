#include <iostream>
using namespace std;

int main()
{
    int c_10=0, c_20=0, c_30=0, c_maior_30=0; //contador de pessoas por faixa etária
    int s_10=0, s_20=0, s_30=0, s_maior_30=0; // soma dos pesos por faixa etária
    int idade[20];
    float peso[20];
    float media (float x, float y);

    for(int i=0; i<9; i++)
    {
        cout << "Qual a idade da pessoa numero " << i+1 << "?\n";
        cin >> idade[i];
        cout << "E seu peso?\n";
        cin >> peso[i];

        if (idade[i] >= 1 and idade[i] <= 10)
        {
            s_10 += peso[i];
            c_10++;
        }
        else if (idade[i] >= 11 and idade[i] <= 20)
        {
            s_20 += peso[i];
            c_20++;
        }
        else if (idade[i] >= 21 and idade[i] <= 30)
        {
            s_30 += peso[i];
            c_30++;
        }
        else if (idade[i] > 30)
        {
            s_maior_30 += peso[i];
            c_maior_30++;
        }
    }

    cout << "A media dos pesos da faixa etaria de 1 a 10 anos e " << media(s_10,c_10) << endl;
    cout << "A media dos pesos da faixa etaria de 11 a 20 anos e " << media(s_20,c_20) << endl;
    cout << "A media dos pesos da faixa etaria de 21 a 30 anos e " << media(s_30,c_30) << endl;
    cout << "A media dos pesos da faixa etaria maiores de 30 e " << media(s_maior_30,c_maior_30) << endl;

    return 0;
}

float media (float x, float y)
{
    float m;
    m = x/y;
    return m;
}