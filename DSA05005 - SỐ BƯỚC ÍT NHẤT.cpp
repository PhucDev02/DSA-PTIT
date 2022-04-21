#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
int n;
vector<int> f(1005);
void solve()
{
    int n, s = 0;
    cin >> n;
    int a[n], f[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        f[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] >= a[j] )
                f[i] = max(f[i],f[j]+1);
        }
        s = max(s, f[i]);
    }
    cout << n - s;
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