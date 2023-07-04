#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int tamanho = 15;
    float nota_1[tamanho], nota_2[tamanho], soma=0;
    string nome[15];
    void imprime(string a, float b, float c);

    for(int i=0; i < 15; i++)
    {
        cout << "Digite o nome da " << i+1 << " pessoa." <<endl;
        cin >> nome[i];
        cout << "Digite a nota da primeira prova de " << nome[i] << ":" <<endl;
        cin >> nota_1[i];
        cout << "Digite a nota da segunda prova de " << nome[i] << ":" <<endl;
        cin >> nota_2[i];

        soma+= nota_1[i] + nota_2[i];
    }
    for(int i=0; i < 15; i++)
    {
        imprime(nome[i], nota_1[i], nota_2[i]);
    }

    cout << "A media da turma e: " << soma/15 << "." <<endl;

    return 0;
}

void imprime(string a, float b, float c)
{
    float media = (b + c)/2;
    cout << "Aluno(a): " << a << ". PRA1: " << b << ", PRA2: " << c << "." <<endl;
    cout << "Sua media e: " << media << "." <<endl;
}
