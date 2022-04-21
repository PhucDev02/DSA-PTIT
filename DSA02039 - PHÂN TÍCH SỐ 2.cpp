#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>
#define endl "\n"
using namespace std;
int a[50];
queue<string> res;
void in(int n)
{
    string tmp = "(";
    for (int i = 1; i < n; i++)
        tmp = tmp + to_string(a[i]) + " ";
    // cout<<a[n] << ") ";
    tmp = tmp + to_string(a[n]) + ")";
    res.push(tmp);
}
void Try(int x, int i, int s)
{
    for (int j = x; j >= 1; j--)
    {
        a[i] = j;
        if (j == s)
            in(i);
        else if (j < s)
            Try(j, i + 1, s - j);
    }
}
void solve()
{
    int n;
    cin >> n;
    Try(n, 1, n);
    cout << res.size()<<endl;
    while (res.size())
    {
        cout << res.front()<<" ";
        res.pop();
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}