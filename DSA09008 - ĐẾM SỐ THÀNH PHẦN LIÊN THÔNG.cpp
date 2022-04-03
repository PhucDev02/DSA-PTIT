#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>
#include <string.h>
using namespace std;
int V, E;
queue<int> st;
int dem = 0;
void bfs(int u, vector<vector<int>> &e, vector<bool> &vs)
{
	st.push(u);
	dem++;
 
    while (st.size() != 0)
    {
        int k = st.front();
        st.pop();
		vs[k] = true;
 
        for (int i = 0; i < e[k].size(); i++)
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
    int x, y;
    cin >> V >> E;
    dem = 0;
    vector<vector<int>> e(V + 10);
    vector<bool> vs(V + 10, 0);
    for (int i = 1; i <= E; i++)
    {
        cin >> x >> y;
        e[x].push_back(y);
        e[y].push_back(x);
    }
    for (int i = 1; i <= V; i++)
    {
        if (vs[i] == false)
            bfs(i, e, vs);
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