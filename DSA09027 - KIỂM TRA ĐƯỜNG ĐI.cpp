#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <set>
using namespace std;
int E, V;
vector<vector<int>> ds(1002);
void solve()
{

    cin >> V >> E;
    for (int i = 1; i <= E; i++)
    {
        int u, v;
        cin >> u >> v;
        ds[u].push_back(v);
        ds[v].push_back(u);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x,y,k;
        cin >> x >> y;
        queue<int> q;
        q.push(x);
        int ok = 0, check[V + 1] = {};
        while (q.size())
        {
            k = q.front();
            q.pop();
            if (k == y)
            {
                ok = 1;
                break;
            }
            for (int i = 0; i < ds[k].size(); i++)
            {
                if (!check[ds[k][i]])
                {
                    check[ds[k][i]] = 1;
                    q.push(ds[k][i]);
                }
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        cout << endl;
    }
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