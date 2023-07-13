#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a[3][3]  = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    int b[3][3] = {{2, 4, 8}, {16, 32, 64}, {128, 256, 512}};
    int c[3][3];

    for(int linha=0; linha < 3; linha++)
    {
        for(int coluna=0; coluna < 3; coluna++)
        {
            c[linha][coluna] = a[linha][coluna] + b[linha][coluna];
            cout << setw(6) << c[linha][coluna];
        }
        cout << endl;
    }

    return 0;
}