#include <iostream>
using namespace std;

int main()
{
    char gabarito[10];
    int aluno[36];
    int nota[36][1];
    int ap=0;
    char resposta[36][10];

    cout << "GABARITO:" <<endl;
    for(int i=0; i<10; i++)
    {
        cout << "Digite a resposta correta para a " << i+1 << " questao: " <<endl;
        cin >> gabarito[i];
    }

    for(int i=0; i<36; i++)
    {
        cout << "Digite o numero do " << i+1 << " aluno: "<<endl;
        cin >> aluno[i];
        for(int j=0; j<10; j++)
        {
            cout << "Digite a resposta do aluno para a questao " << j+1 << ":" <<endl;
            cin >> resposta[i][j];
        }
    }

    for(int i=0; i<36; i++)
    {
        nota[i][1] = 0;
        for(int j=0; j<10; j++)
        {
            if(resposta[i][j] == gabarito[j])
            {
                nota[i][1] = nota[i][1] + 1;
            }
        }
    }

    cout << "NOTAS:" <<endl;
    for(int i=0; i<36; i++)
    {
        cout << "---------------------------------------------------" <<endl;
        cout << "Aluno de numero: " << aluno[i] <<endl;
        cout << "Nota: " << nota[i][1] <<endl;
        cout << "---------------------------------------------------" <<endl;
    }

    cout << "PORCENTAGEM DE APROVACOES:" <<endl;
    for(int i=0; i<36; i++)
    {
        if(nota[i][1] >= 6)
        {
            ap++;
        }
    }
    cout << (ap * 36) / 100 << " porcento dos alunos foram aprovados.";

    return 0;
}