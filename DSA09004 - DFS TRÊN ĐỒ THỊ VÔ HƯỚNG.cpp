#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;

int V, E;
vector<vector<int>> e;
vector<bool> vs;
stack<int> st;
void dfs(int u)
{
    st.push(u);
    while (st.size() != 0)
    {
        int k = st.top();
        st.pop();
        if (vs[k] == false)
        {
            cout << k << " ";
            vs[k] = true;
        }
        for (int i = e[k].size() - 1; i >= 0; i--)
        {
            if (vs[e[k][i]] == 0)
            {
                st.push(e[k][i]);
            }
        }
    }
}

void solve()
{
    int x, y, k;
    cin >> V >> E >> k;
    e.clear();
    vs.clear();
    e.resize(V + 10);
    vs.resize(V + 10, false);
    for (int i = 1; i <= E; i++)
    {
        cin >> x >> y;
        e[x].push_back(y);
        e[y].push_back(x);
    }
    dfs(k);
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