#include <iostream>
#include <cstring>
using namespace std;

struct Funcionarios
{
    string nome;
    int idade;
    char sexo;
    string cpf;
    string data;
    int setor;
    string cargo = cargo.substr(0, 30);
    float salario;
};

int main()
{
    Funcionarios p[10];
    
    for(int i=0; i<10; i++)
    {
        cout << "Qual o seu nome?\n";
        getline(cin, p[i].nome);

        cout << "Quantos anos voce tem?\n";
        cin >> p[i].idade;
        cin.ignore();

        cout << "Digite seu sexo: [M/F]\n";
        cin >> p[i].sexo;
        cin.ignore();

        cout << "Digite o numero do seu cpf:\n";
        getline(cin, p[i].cpf);

        cout << "Digite sua data de nascimento:\n";
        getline(cin, p[i].data);

        cout << "Qual o codigo do setor que trabalha?\n";
        cin >> p[i].setor;
        cin.ignore();

        cout << "Qual o cargo que ocupa?\n";
        getline(cin, p[i].cargo);
        
        cout << "Digite o seu salario:\nR$";
        cin >> p[i].salario;
        cin.ignore();
    }

    for(int i=0; i<10; i++)
    {
        cout << "----------------------------------------------------------" <<endl;
        cout << "Nome: " << p[i].nome <<endl;
        cout << "Idade: " << p[i].idade << " anos.\n";
        cout << "Sexo: " << toupper(p[i].sexo) <<endl;
        cout << "CPF: " << p[i].cpf <<endl;
        cout << "Data de nacimento: " << p[i].data <<endl;
        cout << "Setor: " << p[i].setor <<endl;
        cout << "Cargo: " << p[i].cargo <<endl;
        cout << "Salario: R$" << p[i].salario <<endl;
        cout << "----------------------------------------------------------" <<endl;
    }

    return 0;
}