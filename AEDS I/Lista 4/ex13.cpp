#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int matriz1[2][2] = {{12,24}, {30,60}};
    int matriz2[2][2] = {{1,2}, {3,4}};
    int w[2][2];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            w[i][j]=0;
            for(int k=0; k<2; k++)
            {
                w[i][j] = w[i][j] + matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout << setw(6) << w[i][j];
        }
        cout<<endl;
    }

    return 0;
}