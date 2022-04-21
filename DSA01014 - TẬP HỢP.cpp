#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int n, k, s;
int res;
vector<int> a(30);
void check()
{
    int sum = 0;
    for (int i = 1; i <= k; i++)
        sum += a[i];
    if (sum == s)
        res++;
}
void Try()
{
    for (int i = k; i >= 1; i--)
    {
        if (a[i] != n - k + i)
        {
            a[i]++;
            for (int j = i + 1; j <= k; j++)
                a[j] = a[j - 1] + 1;
            check();
            i = k + 1;
        }
    }
}
void solve()
{
    res = 0;
    cin >> n >> k >> s;
    if (n == 0 && k == 0 && k == 0)
        return;
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
    check();
    // Try();
    cout << res << endl;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (1)
    {
        res = 0;
        cin >> n >> k >> s;
        if (n == 0 && k == 0 && s == 0)
            break;
        if (n >= k)
        {
            for (int i = 1; i <= k; i++)
            {
                a[i] = i;
            }
            check();
            Try();
            cout << res << endl;
        }
        else cout<<"0\n";

        // solve();
        // cout << endl;
    }
    return 0;
}