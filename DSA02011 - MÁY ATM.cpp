#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
int n, s, res;
vector<int> a(50);
void Try(int remain, int i, int count)
{

    if (remain == 0)
    {
        res = min(res, count);
        return;
    }
    else
    {
        if (i == n + 1 || remain < 0)
        {
            return;
        }
        else
        {
            Try(remain - a[i], i + 1, count + 1); // lay
            Try(remain, i + 1, count);            // ko lay
        }
    }
}
void solve()
{
    res = 99999;
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Try(s, 1, 0);
    if (res == 99999)
        cout << -1;
    else
        cout << res;
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