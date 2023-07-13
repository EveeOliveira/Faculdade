#include <iostream>
using namespace std;

struct Compromisso
{
    struct Horario
    {
        int hora;
        int minutos;
        int segundos;
    };

    struct Data 
    {
        int dia;
        int mes;
        int ano;
    };

    string descricao;
};
