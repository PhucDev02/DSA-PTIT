#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>
#include <string.h>
using namespace std;
int V, E, maxx, tmp;

void solve()
{
    int x, y;
    cin >> V;
    vector<vector<int>> e(V + 10);
    vector<bool> vs(V + 10, 0);
    for (int i = 1; i <= V; i++)
    {
        for (int j = 1; j <= V; j++)
        {
            cin >> x;
            if (x == 1)
            {
                e[i].push_back(j);
            }
        }
    }
    for (int i = 1; i <= V; i++)
    {
        for (int j = 0; j < e[i].size(); j++)
        {
            cout << e[i][j] << " ";
        }
        cout << endl;
    }
    // cout<<maxx;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}