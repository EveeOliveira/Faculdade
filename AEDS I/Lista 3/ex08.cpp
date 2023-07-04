#include <iostream>
using namespace std;

int main()
{
    int cont=1;
    int idade[cont];
    int menor_21=0, maior_50=0;
    string t;
    void imprime(int x, int y);
    
    for(int i=0; i < cont ; i++)
    {
        cont++;
        cout << "Digite a idade da " << i+1 << " pessoa:\n";
        cin >> idade[i];
        
        if (idade[i] < 21)
        {
            menor_21++;
        }
        else if (idade[i] > 50)
        {
            maior_50++;
        }

        cout << "Digite qualquer coisa p/ continuar. Se desejar sair digite 'Fim':\n";
        cin >> t;
        if (t == "Fim")
        {
            break;
        }
    }

    imprime(menor_21, maior_50);

    return 0;
}

void imprime(int x, int y)
{
    cout << "O total de pessoas com menos de 21 anos e " << x <<endl;
    cout << "O total de pessoas com mais de 50 anos e " << y <<endl;
}