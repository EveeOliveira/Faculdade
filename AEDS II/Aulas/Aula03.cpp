#include <iostream>

using namespace std;

bool procura(int x, int y[], int z)
{
    int inicio = 0;
    int final = z - 1;
    
    while(inicio <= final){

        int meio = (inicio + final)/2;
        
        if (x == y[meio]){
            return true;
        }
        else if ( x < y[meio]){
            final = meio - 1;
        }
        else
        {
            inicio = meio + 1;
        }
    }
    return false;
}

int main() {
    int tamanho = 100;
    int vetor[tamanho];
    int num = 0;
    for(int i = 0; i <= 100; i ++)
    {
        vetor[i] = i*2;
    }

    cout << "Digiteum numero qualquer: ";
    cin >> num;
    if (procura(num, vetor, tamanho) == true)
    {
        cout << "O numero faz parte do vetor";
    }
    else
    {
        cout << "O numero nao faz parte do vetor";
    }

}