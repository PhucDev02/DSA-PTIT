#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>
#include <string.h>
using namespace std;
int n, m;
vector<vector<int>> a(505, vector<int>(505, 0));

void Try(int i, int j)
{
    a[i][j] = 0;
    if (a[i - 1][j] == 1)
        Try(i - 1, j);
    if (a[i - 1][j - 1] == 1)
        Try(i - 1, j - 1);
    if (a[i - 1][j + 1] == 1)
        Try(i - 1, j + 1);
    if (a[i + 1][j] == 1)
        Try(i + 1, j);
    if (a[i + 1][j + 1] == 1)
        Try(i + 1, j + 1);
    if (a[i][j + 1] == 1)
        Try(i, j + 1);
    if (a[i][j - 1] == 1)
        Try(i, j - 1);
    if (a[i + 1][j - 1] == 1)
        Try(i + 1, j - 1);
}
void solve()
{
    int dem = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == 1)
            {
                Try(i, j);
                dem++;
            }
        }
    }
    cout << dem;
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
}