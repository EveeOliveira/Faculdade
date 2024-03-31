#include <iostream>

using namespace std;

int pot (int x, int y)
{
    if (y >= 0)
    {
        if (y == 0)
        {
            return 1;
        }
        else if (y == 1)
        {
            return x;
        }
        else 
        {
            return x * pot(x, y-1);
        }
    }
    else
    {
        return 1/pot(x, -y);
    }
}

int main()
{
    int x = 0, y = 0;
    cout << "Digite um valor para x: ";
    cin >> x;
    while (x == 0)
    {
        cout << "Valor invalido! Digite um valor para x:";
        cin >> x;
    }
    cout << "Digite um valor para y: ";
    cin >> y;
    cout << pot(x, y);
        
    return 0;
}
