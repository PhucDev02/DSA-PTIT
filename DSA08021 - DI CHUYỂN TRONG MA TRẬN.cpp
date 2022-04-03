#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <set>
using namespace std;
struct data
{
    int i, j, count;
    data(int i, int j, int count)
    {
        this->i = i;
        this->j = j;
        this->count = count;
    }
};
void solve()
{
    int n, m;
    cin >> n >> m;
    long long a[n+2][m+2];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    //
    vector<vector<int>> check(n + 2, vector<int>(m + 2, 0));
    queue<data> q;
    q.push(data(1, 1, 0));
    while (q.size() != 0)
    {
        data x = q.front();
        q.pop();
        int i = x.i, j = x.j;
        if (i == n && j == m)
        {
            cout << x.count;
            return;
        }
        if (i + a[i][j] <= n && check[i + a[i][j]][j] == 0)
        {
            check[i + a[i][j]][j] = 1;
            q.push(data(i + a[i][j], j, x.count + 1));
        }
        if (j + a[i][j] <= m && check[i][j + a[i][j]] == 0)
        {
            check[i][j + a[i][j]] = 1;
            q.push(data(i, j + a[i][j], x.count + 1));
        }
    }
    cout << -1;
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