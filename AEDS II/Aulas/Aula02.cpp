#include <iostream>

using namespace std;

int fatorial (int x){
    // caso base
    if (x == 1 || x == 0) {
        return 1;
    }
    // caso recursivo
    else {
        return x * fatorial(x-1);
    }
 }

int main(){
    int num = 0;

    cout << "Digite um numero qualquer:";
    cin >> num;

    cout << fatorial(num);

    return 0;
}