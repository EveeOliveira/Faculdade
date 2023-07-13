#include <iostream>
#include <cstring>
using namespace std;

struct Livro
{
    char titulo[30];
    char autor[15];
    int ano;
};

int main()
{
    Livro livros[5];
    int ano=0, cont=0;

    for(int i=0; i<5; i++)
    {
        cout << "Titulo do " << i+1 << " livro: ";
        gets(livros[i].titulo);
        cout << "Autor: ";
        gets(livros[i].autor);
        cout << "Ano: ";
        cin >> livros[i].ano;
        cin.ignore();
    }

    cout << "Por qual ano deseja procurar?\n";
    cin >> ano;

    for(int i=0; i<5; i++)
    {
        if(ano == livros[i].ano)
        {
            cout << "------------------------------------------------------" <<endl;
            cout << "Livro: " << livros[i].titulo <<endl;
            cout << "Autor: " << livros[i].autor <<endl;
            cout << "Ano: " << livros[i].ano <<endl;
            cout << "------------------------------------------------------" <<endl;
        }
        else
        {
            cont++;
            if(cont == 5)
            {
                cout << "Nao temos livros disponiveis deste ano." <<endl;
            }
        }
    }

    return 0;
}