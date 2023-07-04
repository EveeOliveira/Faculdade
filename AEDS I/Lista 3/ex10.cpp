#include <iostream>
using namespace std;

int main()
{
    int idade=0, aux=0, reg=0, bom=0, exe=0, soma=0;
    int media(int a);
    float porcent(int a);
    for(int i=0; i < 20; i++)
    {
        cout << "Qual a idade da " << i+1 << " pessoa?" <<endl;
        cin >> idade;
        cout << "Qual a avaliacao sobre o filme?" <<endl;
        cout << "[1]-REGULAR    [2]-BOM    [3]-EXCELENTE" <<endl;
        cin >> aux;

        if (aux == 1)
        {
            reg++;
        }
        else if (aux == 2)
        {
            bom++;
        }
        else if (aux == 3)
        {
            exe++;
        }
        
        soma+=idade;
    }

    cout << "A media das idades dos telespectadores e de " << media(soma) <<endl;
    cout << reg << " pessoas acharam o filme regular. Isso corresponde a " << porcent(reg) << "%." <<endl;
    cout << bom << " pessoas acharam o filme bom. Isso corresponde a " << porcent(bom) << "%." <<endl;
    cout << exe << " pessoas acharam o filme excelente. Isso corresponde a " << porcent(exe) << "%." <<endl;

    return 0;
}

int media(int a)
{
    int media = a/20;
    return media;
}
float porcent(int a)
{
    float p = (a * 100)/20;
    return p;
}