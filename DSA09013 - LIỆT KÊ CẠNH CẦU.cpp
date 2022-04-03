#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
int V, E;
int x, y;
vector<vector<int>> ds;
vector<int> vs;
vector<pair<int, int>> edge;
int lienthong;
void bfs(int s)
{
    queue<int> st;
    st.push(s);
    vs[s] = 1;

    while (!st.empty())
    {
        int u = st.front();
        st.pop();
        for (auto v : ds[u])
        {
            if ((x == u && y == v) || (x == v && y == u))
                continue;
            if (vs[v] == 0)
            {
                st.push(v);
                vs[v] = 1;
            }
        }
    }
}
void checkcanhcau(pair<int, int> e)
{
    vs.clear();
    vs.resize(V + 1, 0);
    int tmp = 0;
    x = e.first;
    y = e.second;
    for (int i = 1; i <= V; i++)
    {
        if (vs[i] == 0)
        {
            bfs(i);
            tmp++;
        }
    }
    if (tmp > lienthong)
    {
        cout << x << " " << y << " ";
    }
}
void solve()
{
    lienthong = 0;
    cin >> V >> E;
    ds.clear();
    ds.resize(V + 1);
    vs.clear();
    vs.resize(V + 1, 0);
    edge.clear();
    edge.resize(E + 1);
    for (int i = 1; i <= E; i++)
    {
        cin >> x >> y;
        ds[x].push_back(y);
        ds[y].push_back(x);
        edge[i].first = x;
        edge[i].second = y;
    }
    x = y = 0;
    for (int i = 1; i <= V; i++)
    {
        if (vs[i] == 0)
        {
            lienthong++;
            bfs(i);
        }
    }
    // cout<<lienthong;
    for (int i = 1; i <= E; i++)
    {
        checkcanhcau(edge[i]);
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