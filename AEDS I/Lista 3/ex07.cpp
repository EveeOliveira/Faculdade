#include <iostream>
using namespace std;

int main()
{
    float num[10] = {15, 27, 3, 19, 8, 36, 29, 13, 90, 1};
    float maior=0, menor=0;

    maior = num[0];
    menor = num[0];

    for(int i=0; i < 10; i++)
    {
        if(num[i] > maior)
        {
            maior = num[i];
        }
        if(num[i] < menor)
        {
            menor = num[i];
        }
    }

    cout << "O maior numero e " << maior <<endl;
    cout << "O menor numero e " << menor <<endl;

    return 0;
}