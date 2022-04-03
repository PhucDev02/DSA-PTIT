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
long long Try(long long n, long long k)
{
    long long p = pow(2, n - 1);
    if (k == p)
    {
        return n;
    }
    return Try(n-1,abs(k-p));
}
void solve()
{
    long long n, k;
    cin >> n >> k;
    cout <<(char) (Try(n, k)+64);
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