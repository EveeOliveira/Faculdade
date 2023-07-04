#include <iostream>
using namespace std;

int main()
{
    int soma (int x, int y);
    int multi (int x, int y);
    int a=0, b=0;

    cout << "Digite dois numeros inteiros quaisquer: " << endl;
    cin >> a;
    cin >> b;

    cout << a << " + " << b << " = " << soma(a,b) << endl;
    cout << a << " x " << b << " = " << multi(a,b) << endl;

    return 0;
}

int soma (int x, int y)
{  
    int s;
    s = x + y;
    return s;
}

int multi (int x, int y)
{
    int m;
    m = x * y;
    return m;
}
