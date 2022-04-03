#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
void solve()
{
    long long n, k;
    cin >> n >> k;
    long long a[n + 1];
    a[1] = 1;
    a[2] = 1;
    for (int i = 3; i <= n; i++)
        a[i] = a[i - 1] + a[i - 2];
    while (1)
    {
        if (n == 1)
        {
            cout << "0\n";
            break;
        }
        else if (n == 2)
        {
            cout << "1\n";
            break;
        }
        if (k > a[n - 2])
        {
            k -= a[n - 2];
            n--;
        }
        else
            n -= 2;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout<<endl;
    }
}