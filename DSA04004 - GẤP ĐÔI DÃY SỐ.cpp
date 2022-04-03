#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
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
    cout << Try(n, k);
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