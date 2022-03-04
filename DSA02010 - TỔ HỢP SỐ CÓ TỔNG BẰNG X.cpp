#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
int n, s, check;
vector<int> a(50), res(50);
void in(int x)
{
    cout << "[";
    for (int i = 1; i < x; i++)
    {
        cout << res[i] << " ";
    }
    cout << res[x] << "]";
}
void Try(int i, int remain)
{
    //cout << remain << endl;
    if (remain == 0 )
    {
        check = 1;
        in(i - 1);
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
    check = 0;
    cin >> n >> s;
    res[0] = -99;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Try(1, s);
    if (check == 0)
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