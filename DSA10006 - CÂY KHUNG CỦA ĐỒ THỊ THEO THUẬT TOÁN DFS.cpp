#include<bits/stdc++.h>
using namespace std;
int V, E, u;
vector<int> ds[1000 + 5];
vector<int> check(1000 + 5, 0);
// int check[1003];
vector<pair<int, int>> res;
void dfs(int u)
{
    check[u] = 1;
	for (auto i : ds[u])
	{
		if (!check[i])
		{
			res.push_back({u, i});
			dfs(i);
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
    dfs(u);
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