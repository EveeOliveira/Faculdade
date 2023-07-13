#include <iostream>
#include <iomanip>
using namespace std;

struct Aluno
{
    string nome;
    int prova1, prova2, prova3;
    string ap;
};

int main()
{
    Aluno aluno[100];
    int total[100];

    for(int i=0; i<100; i++)
    {
        cout << "Digite o nome do " << i+1 << " aluno: ";
        cin >> aluno[i].nome;
        cout << "Digite a nota da primeira prova: ";
        cin >> aluno[i].prova1;
        cout << "Digite a nota da segunda prova: ";
        cin >> aluno[i].prova2;
        cout << "Digite a nota da terceira prova: ";
        cin >> aluno[i].prova3;
    }

    for(int i=0; i<100; i++)
    {
        total[i] = aluno[i].prova1 + aluno[i]. prova2 + aluno[i].prova3;
        if(total[i] >= 60)
        {
            aluno[i].ap = "Aprovado!";
        }
        else
        {
            aluno[i].ap = "Reprovado!";
        }
    }

    for(int i=0; i<100; i++)
    {
        cout << "-------------------------------------------------------" <<endl;
        cout << "Aluno(a): " << aluno[i].nome <<endl;
        cout << "Total: " << total[i] <<endl;
        cout << "Situacao: " << aluno[i].ap <<endl;
        cout << "-------------------------------------------------------" <<endl;
    }

    return 0;
}
