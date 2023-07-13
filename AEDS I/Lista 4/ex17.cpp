#include <iostream>
#include <cstring>
using namespace std;

struct Pessoas 
{
    string nome;
    int idade;
    string cidade;
    string bairro;
    string rua;
    int numero;
};

int main()
{
    Pessoas pessoa;

    cout << "Digite seu nome: ";
    getline(cin, pessoa.nome);
    cout << "Digite sua idade: ";
    cin >> pessoa.idade;
    cin.ignore();
    cout << "Digite sua cidade: ";
    getline(cin, pessoa.cidade);
    cout << "Digite seu bairro: ";
    getline(cin, pessoa.bairro);
    cout << "Digite sua rua: ";
    getline(cin, pessoa.rua);
    cout << "Digite o numero da sua casa: ";
    cin >> pessoa.numero;
    cin.ignore();

    return 0;
}