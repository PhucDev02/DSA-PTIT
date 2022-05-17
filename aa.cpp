#include <bits/stdc++.h>
using namespace std;
#define inf 1000000007
int ds[300][300];
vector<pair<int, int>> trace; // first luu cost,second luu dinh truoc
vector<int> check;
int E, V;
int s;
void init()
{
    cin >> V >> s;
    trace.resize(V + 1, {inf, 0});
    check.resize(V + 1, 0);

    for (int i = 1; i <= V; i++)
    {
        for (int j = 1; j <= V; j++)
        {
            cin >> ds[i][j];
        }
    }
    trace[1] = {0, 0};
}
void func(int count)
{
    int u;
    int tmp = inf;
    for (int i = 1; i <= V; i++)
    {
        // cout<<i<<" "<<trace[i].first<<" "<<trace[i].second<<endl;
        if (trace[i].first < tmp && check[i] == 0)
        {
            u = i;
            tmp = trace[i].first;
        }
    }
    check[u] = 1;
    // cout<<"tmp"<<tmp<<" u "<<u<<endl;

    for (int v = 1; v <= V; v++)
    {
        if (check[v] == 0 && ds[u][v] != 0) // neu chua check
        {
            if (trace[u].first + ds[u][v] < trace[v].first) // kiem tra cost
            {
                trace[v].first = trace[u].first + ds[u][v];
                trace[v].second = u;
            }
        }
    }
    if (count == V)
        return;
    func(count + 1);
}
void solve()
{

    init();
    func(1);
    trace[1].second = 1;
    for (int i = 1; i <= V; i++)
    {
        cout << "K/c 1 -> " << i << " = ";
        if (trace[i].first == inf)
        {
            cout<<"INF;\n";
        }
        else
        {
            cout << trace[i].first << "; ";
            int x = trace[i].second;
            cout << i << " <- ";
            while (x != s)
            {
                cout << x << " <- ";
                x = trace[x].second;
            }
            cout << 1 << endl;
        }
    }
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
    return 0;
}