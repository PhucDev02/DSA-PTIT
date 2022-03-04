#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <set>
using namespace std;
int n;
int a[15][15];
vector<string> s;
void Try(int i, int j,string t)
{
    if (i == n && j == n)
    {
        s.push_back(t);
        return;
    }
    if (a[i + 1][j] == 1&&i+1<=n)
    {
        Try(i + 1, j,t+"D");
    }
    if (a[i][j + 1] == 1&&j+1<=n)
    {
        Try(i, j + 1,t+"R");
    }
}
void solve()
{
    s.clear();
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    if(a[1][1]==1)
    Try(1, 1,"");
    sort(s.begin(), s.end());
    if (s.size() != 0)
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i] << " ";
        }
    else
        cout << -1;
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