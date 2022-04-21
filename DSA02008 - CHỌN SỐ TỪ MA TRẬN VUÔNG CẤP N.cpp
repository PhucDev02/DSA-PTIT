#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>
#define endl "\n"
using namespace std;
int a[20][20];
vector<int> hv;
queue<string> q;
int n, s;
int dem = 0;
void check()
{
    string tmp = "";
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i][hv[i]];
    }
    if (sum == s)
    {
        for (int i = 1; i <= n; i++)
        {
            tmp = tmp + to_string(hv[i]) + " ";
        }
        q.push(tmp);
    }
}
void solve()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    hv.push_back(0);
    for (int i = 1; i <= n; i++)
    {
        hv.push_back(i);
    }
    check();
    while (next_permutation(hv.begin() + 1, hv.end()))
    {
        check();
    }
    cout << q.size() << endl;
    while (q.size())
    {
        cout << q.front() << endl;
        q.pop();
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}