#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> f(n+1);
    f[0] = 1;
    a[n]=999999;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] >a[j])
            {
                f[i] = max(f[i], f[j] + 1);
            }
        }
    }
    cout << f[n]-1;
    // cout<<n-res;
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