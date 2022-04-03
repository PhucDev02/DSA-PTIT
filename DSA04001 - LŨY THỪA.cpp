#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
long long mod = 1000000007;
long long poww(long long n, long long k)
{
    if (k == 1)
        return n;
    long long x = poww(n, k / 2);
    if (k % 2 == 0)
        return (x * x) % mod;
    else
        return (((x * x) % mod) * n) % mod;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n,k;
        cin >> n>>k;
        cout << poww(n,k) << endl;
    }
}