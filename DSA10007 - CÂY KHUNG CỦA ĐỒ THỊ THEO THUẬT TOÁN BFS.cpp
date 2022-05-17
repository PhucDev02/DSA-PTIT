#include <bits/stdc++.h>
using namespace std;
int V, E, u;
vector<int> ds[1000 + 5];
vector<int> check(1000 + 5, 0);
// int check[1003];
vector<pair<int, int>> res;
void bfs(int u)
{
    queue<int> q;
    check[u] = 1;
    q.push(u);
    while (q.size())
    {
        int k = q.front();
        q.pop();
        for (auto i : ds[k])
        {
            if (!check[i])
            {
                check[i] = 1;
                res.push_back({k, i});
                q.push(i);
            }
        }
    }
}
void solve()
{
    res.clear();
    for (int i = 1; i <= V; i++)
    {
        check[i] = 0;
        ds[i].clear();
    }
    cin >> V >> E >> u;
    for (int i = 1; i <= E; i++)
    {
        int a, b;
        cin >> a >> b;
        ds[a].push_back(b);
        ds[b].push_back(a);
    }
    bfs(u);
    for (int i = 1; i <= V; i++)
    {
        if (check[i] == 0)
        {
            cout << -1 << endl;
            return;
        }
    }
    for (auto i : res)
        cout << i.first << " " << i.second << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}