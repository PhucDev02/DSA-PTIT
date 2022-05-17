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
vector<vector<int>> ds;
vector<int> vs;

void dfs(int s)
{

    stack<int> st;
    st.push(s);
    vs[s] = 1;

    while (!st.empty())
    {
        int u = st.top();
        st.pop();

        for (auto v : ds[u])
        {
            if (!vs[v])
            {
                vs[v] = 1;
                st.push(u);
                st.push(v);
                break;
            }
        }
    }
}
void solve()
{
    int x, y;
    cin >> V >> E;
    ds.clear();
    ds.resize(V + 1);
    for (int i = 1; i <= E; i++)
    {
        cin >> x >> y;
        ds[x].push_back(y);
    }

    for (int i = 1; i <= V; i++)
    {
        vs.clear();
        vs.resize(V + 1, 0);
        dfs(i);
        for (int j = 1; j <= V; j++)
        {
            if (vs[j] == 0)
            {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}