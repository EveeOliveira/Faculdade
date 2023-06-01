#include <iostream>

using namespace std;

int main() {
    
    int num[5];
    int maior, menor, primeiro;
    maior = 0;
    
    cout << "Digite 5 numeros inteiros quaisquer: \n" ;

    for (int i = 0; i < 5; ++i) {
        cin >> num[i];
        
        if (num[i] > maior) {
            maior = num[i];
        }

        primeiro = num [0];
        if (num[i] < primeiro and num[i] < menor){
            menor = num[i];
        }
    }
    

    cout << "O maior numero dentre eles é " << maior << "\n";
    cout << "E o menor é " << menor;

    return 0;
}
