#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> f(n + 1, vector<int>(m + 1, 0));
    int a[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= m; i++)
    {
        f[1][i] = f[1][i - 1] + a[1][i];
    }
    for (int i = 1; i <= n; i++)
    {
        f[i][1] = f[i - 1][1] + a[i][1];
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= m; j++)
        {
            f[i][j] = min(f[i - 1][j], min(f[i][j - 1], f[i - 1][j - 1])) + a[i][j];
        }
    }
    cout << f[n][m];
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