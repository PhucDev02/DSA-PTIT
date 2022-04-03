#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
int a[20][20];
vector<int> vs(20, 0), ans(20, 0);
int n;
int res = 99999999, minn = 99999999;
void Try(int i, int sum)
{
    if (sum + minn * (n - i + 1) >= res)
        return;
    for (int j = 2; j <= n; j++)
    {
        if (vs[j] == 0)
        {
            ans[i] = j;
            vs[j] = 1;
            if (i == n)
            {
             //   cout << res << endl;
                res = min(res, sum + a[ans[i]][1]+a[ans[i]][ans[i-1]]);
            }
            else
                Try(i + 1, sum + a[ans[i]][ans[i - 1]]);
            vs[j] = 0;
        }
    }
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] != 0)
                minn = min(minn, a[i][j]);
        }
    }
    vs[1] = 1;
    ans[1] = 1;
    Try(2, 0);
    cout << res;
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