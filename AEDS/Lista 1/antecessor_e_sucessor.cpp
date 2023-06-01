#include <iostream>

using namespace std;

int main() {

    float num, antecessor, sucessor;
    cout << "Digite um numero qualquer: ";
    cin >> num; 
    antecessor = num - 1;
    sucessor = num + 1;
    cout << "O antecessor de " << num << " é " << antecessor << "\n";
    cout << "E o seu sucessor é " << sucessor;

    return 0;
}
