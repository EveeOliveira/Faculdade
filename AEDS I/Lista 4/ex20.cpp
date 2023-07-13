#include <iostream>
using namespace std;

struct Carro
{
    string marca;
    int ano;
    float preco;
};

int main()
{
    Carro carros[5];

    carros[0] = {"volks", 1998, 17999};
    carros[1] = {"toyota", 2010, 25555};
    carros[2] = {"tesla", 2023, 999999};
    carros[3] = {"volks", 1997, 9555};
    carros[4] = {"renault", 2000, 50855};


    float p;

    cout << "Insira um valor: R$";
    cin >> p;

    for(int i=0; i<5; i++)
    {
        if(p > carros[i].preco)
        {
            cout << "---------------------------------------------------" <<endl;
            cout << "Marca: " << carros[i].marca <<endl;
            cout << "Ano: " << carros[i].ano <<endl;
            cout << "Valor: R$" << carros[i].preco <<endl;
            cout << "---------------------------------------------------" <<endl;
        }
    }

    return 0;
}
