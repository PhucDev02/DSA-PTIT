#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
#define mod 1000000007
long long f[100000 + 12];
void solve()
{
    int n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << 1;
        return;
    }
    f[0] = 1;
    f[1] = 1;
    long long s = 2;
    for (int i = 2; i <= k; i++)
    {
        f[i] = s;
        f[i] %= mod;
        s += f[i];
        s %= mod;
    }
    int j = 0;
    s -= f[j++];
    for (int i = k + 1; i <= n; i++)
    {
        f[i] = s;
        f[i]+=mod;
        f[i] %= mod;
        s += f[i];
        s -= f[j++];
        s %= mod;
    }
    cout << f[n];
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