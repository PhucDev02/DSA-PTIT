#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
long long mod = 1000000007;
long long rev(long long a)
{
    long long res = 0;
    while (a != 0)
    {
        res = res * 10 + a % 10;
        a /= 10;
    }
    return res;
}
long long poww(long long n, long long k)
{
    if (k == 0)
        return 1;
    long long x = poww(n, k / 2);
    if (k % 2 == 0)
        return (x * x) % mod;
    else
        return (((x * x) % mod) * n) % mod;
}
void solve()
{
    long long n;
    cin >> n;
    cout << poww(n, rev(n));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}