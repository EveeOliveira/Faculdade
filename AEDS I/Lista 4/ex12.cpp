#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m=0, n=0, c=0;

    cout << "Digite o numero de linhas das matrizes A e B: [valor menor ou igual a 20]" <<endl;
    cin >> m;

    if(m > 20)
    {
        cout << "Valor invalido!\n";
        cout << "Digite o numero de linhas das matrizes A e B: [valor menor ou igual a 20]" <<endl;
        cin >> m;
    }

    cout << "Digite o numero de colunas das matrizes A e B: [valor menor ou igual a 30]" <<endl;
    cin >> n;

    if(n >30)
    {
        cout << "Valor invalido!\n";
        cout << "Digite o numero de colunas das matrizes A e B: [valor menor ou igual a 30]" <<endl;
        cin >> n;
    }
    
    int a[m][n], b[m][n], aT[n][m];

    for(int linha=0; linha<m; linha++)
    {
        for(int coluna=0; coluna<n; coluna++)
        {
            cout << "Digite o valor de A linha " << linha+1 << ", coluna " << coluna+1 << ":" <<endl;
            cin >> a[linha][coluna];
        }
    }
    for(int linha=0; linha<m; linha++)
    {
        for(int coluna=0; coluna<n; coluna++)
        {
            cout << "Digite o valor de B linha " << linha+1 << ", coluna " << coluna+1 << ":" <<endl;
            cin >> b[linha][coluna];
        }
    }

    cout << "MULTIPLICACAO DE HADAMARD:\n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            c = a[i][j] * b[i][j];
            cout << setw(6) << c;
        }
        cout <<endl;
    }

    cout << "MATRIZ TRASPOSTA DE A:\n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            aT[j][i] = a[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << setw(6) << aT[i][j];
        }
        cout <<endl;
    }

    return 0;
}