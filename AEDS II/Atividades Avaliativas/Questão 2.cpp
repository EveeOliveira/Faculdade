#include <iostream>
#include <string>

using namespace std;

bool palindromo (string x){
    if (x.length() <= 1){
        return true;
    }
    else{
        if (x[0] == x[x.length() - 1]){
            string palavra = x.substr(1, x.length() - 2);
            return palindromo(palavra);
        }
        else {
            return false;
        }
    }
}

int main() {
    string palavra;

    cout << "Digite uma palavra qualquer: ";
    cin >> palavra;
    cout << palindromo(palavra);

    return 0;
}
