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
            if (vs[v] == 0)
            {
                st.push(v);
                vs[v] = 1;
            }
        }
    }
}
void checkdinhtru(int u)
{
    vs.clear();
    vs.resize(V + 1, 0);
    int tmp=0;
    vs[u]=1;
    for(int i=1;i<=V;i++)
    {
        if(vs[i]==0)
        {
            bfs(i);
            tmp++;
        }
    }
    if(tmp>lienthong) cout<<u<<" ";
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
    }
    for (int i = 1; i <= V; i++)
    {
        if (vs[i] == 0)
        {
            lienthong++;
            bfs(i);
        }
    }
    // cout<<lienthong;
    for (int i = 1; i <= V; i++)
    {
        checkdinhtru(i);
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