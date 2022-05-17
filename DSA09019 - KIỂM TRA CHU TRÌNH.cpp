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
int check=0;
void bfs(int s) {
    queue<pair<int, int>> q;
    q.push({s, 0});
    vs[s] = 1;

    while (!q.empty()) {
        int u = q.front().first;
        int pre = q.front().second;
        q.pop();

        for (int v : ds[u]) {
            if (vs[v] == 1 && v != pre) {
                check = 1;
                return;
            }
            if (vs[v] == 0) {
                vs[v] = 1;
                q.push({v, u});
            }
        }
    }
}
void solve()
{
    check=0;
    int x, y;
    cin >> V >> E;
    ds.clear();
    ds.resize(V + 1);
    vs.clear();
    vs.resize(V+1,0);
    for (int i = 1; i <= E; i++)
    {
        cin >> x >> y;
        ds[x].push_back(y);
        ds[y].push_back(x);
    }

    for (int i = 1; i <= V; i++)
    {
       if (!vs[i]) {
            bfs(i);
        }
        if (check) break;
    }
    cout<<(check ? "YES" : "NO");
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