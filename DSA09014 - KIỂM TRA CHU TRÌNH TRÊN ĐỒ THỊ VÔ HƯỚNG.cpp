#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <set>
using namespace std;
vector<int> ds[1010];
int check[1010];
int ok;
int E, V;
void dfs(int u, int v)
{
    if (ok == 1)
        return;
    check[u] = 1;
    for (int i = 0; i < ds[u].size(); i++)
    {
        if (check[ds[u][i]] == 0)
        {
            check[ds[u][i]] = 1;
            dfs(ds[u][i], u);
        }
        else if (ds[u][i] != v)
            ok = 1;
    }
}
void solve()
{
    memset(check, 0, sizeof(check));
    ok = 0;
    cin >> V >> E;
    for (int i = 1; i <= E; i++)
    {
        int u, v;
        cin >> u >> v;
        ds[u].push_back(v);
        ds[v].push_back(u);
    }
    for (int i = 1; i <= V; i++)
    {
        if (!check[i])
            dfs(i, 1);
    }
    if (ok)
        cout << "YES";
    else
        cout << "NO";
    for (int i = 1; i <= V; i++)
    {
        ds[i].clear();
    }
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