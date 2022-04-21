#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>
#define endl "\n"
using namespace std;
#define modd 1000000007
long long c[1002][1002];
void sang()
{
    c[0][0] = 1;
    for (int i = 1; i <= 1000; i++)
    {
        c[i][0] = 1;
        c[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            c[i][j] = c[i - 1][j] + c[i - 1][j - 1];
            c[i][j] %= modd;
        }
    }
}
void solve()
{
    int n, k;
    cin >> n >> k;
    cout << c[n][k];
}
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int t = 1;
    cin >> t;
    sang();
    while (t--)
    {
        solve();
        cout << endl;
    }
}