#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <set>
using namespace std;
int n,m;
int a[15][15];
int dem;
void Try(int i, int j)
{
    if (i == n && j == m)
    {
        dem++;
        return;
    }
    if (i+1<=n)
    {
        Try(i + 1, j);
    }
    if (j+1<=m)
    {
        Try(i, j + 1);
    }
}
void solve()
{
    cin >> n>>m;
    dem=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    Try(1, 1);
    cout<<dem;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}