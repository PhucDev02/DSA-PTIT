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
    long long f[2][2];
    void init()
    {
        f[0][0]=1;
        f[0][1]=1;
        f[1][0]=1;
        f[1][1]=0;
    }
};
Matran operator*(Matran A, Matran B)
{
    Matran C;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C.f[i][j] = 0;
            for (int k = 0; k < 2; k++)
                C.f[i][j] = (C.f[i][j] + A.f[i][k] * B.f[k][j] % M) % M;
        }
    }
    return C;
}
Matran powMod(Matran A,int n)
{
    if(n==1) return A;
    Matran X=powMod(A,n/2);
    if(n%2==0) return X*X;
    return A*X*X;
}
void solve()
{
    int n;
    cin>>n;
    Matran A;
    A.init();
    Matran KQ = powMod(A,n);
    cout<<KQ.f[1][0];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}