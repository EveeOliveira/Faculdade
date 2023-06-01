#include <iostream>

using namespace std;

int main() {
     
    int x, y, z;

    cout << "Digite um valor para x: ";
    cin >> x;
    cout << "Digite uma valor para y: ";
    cin >> y;

    cout << "O valor de x é: " << x << endl;
    cout << "O valor de y é: " << y << endl;

    z = x;
    x = y;
    y = z;

    cout << "O novo valor de x é: " << x << endl;
    cout << "O novo valor de y é: " << y;

    return 0;
}
