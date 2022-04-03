#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
#define M 1000000007
struct Matran
{
    long long f[13][13];
    int row;
    void init(int row)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < row; j++)
            {
                cin >> f[i][j];
            }
        }
    }
    void show()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < row; j++)
            {
                cout<< f[i][j]<<" ";
            }
        cout<<endl;
        }
    }
};
Matran operator*(Matran A, Matran B)
{
    Matran C;
    int n = A.row;
    C.row=n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C.f[i][j] = 0;
            for (int k = 0; k < n; k++)
                C.f[i][j] = (C.f[i][j] + A.f[i][k] * B.f[k][j] % M) % M;
        }
    }
    return C;
}
Matran powMod(Matran A, int n)
{
    if (n == 1)
        return A;
    Matran X = powMod(A, n / 2);
    if (n % 2 == 0)
        return X * X;
    return A * X * X;
}
void solve()
{
    int n, k;
    cin >> n>>k;
    Matran A;
    A.row=n; 
    A.init(n);
    Matran KQ = powMod(A, k);
    KQ.show();
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}