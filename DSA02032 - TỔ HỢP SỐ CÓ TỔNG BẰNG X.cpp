#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
int n, s;
vector<int> a(105), res(105);
vector<vector<int>> kq;
void in(int stt)
{
    cout << "{";
    for (int i = 1; i < kq[stt].size() - 1; i++)
    {
        cout << kq[stt][i] << " ";
    }
    cout << kq[stt][kq[stt].size() - 1] << "} ";
}
void push(int x)
{
    vector<int> tmp;
    tmp.push_back(0);
    for (int i = 1; i <= x; i++)
    {
        tmp.push_back(res[i]);
    }
    kq.push_back(tmp);
}
void Try(int i, int remain)
{
    if (remain == 0)
    {
        push(i - 1);
        return;
    }
    for (int j = 1; j <= n; j++)
    {
        if (a[j] >= res[i - 1] && remain - a[j] >= 0)
        {
            res[i] = a[j];
            Try(i + 1, remain - a[j]);
        }
    }
}
void solve()
{
    kq.clear();
    cin >> n >> s;
    res[0] = -99;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Try(1, s);
    if (kq.size() == 0)
        cout << -1;
    else
    {
        cout << kq.size() << " ";
        for (int i = 0; i < kq.size(); i++)
        {
            in(i);
        }
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