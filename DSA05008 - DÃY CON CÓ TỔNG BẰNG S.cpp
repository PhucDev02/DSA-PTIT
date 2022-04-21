#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
int f[40005];
void solve()
{
    int n;
    int s;
    cin >> n >> s;
    memset(f, 0, sizeof(f));
    vector<int> a(n + 2);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    f[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = s; j >= a[i]; j--)
        {
            if (f[j] == 0 && f[j - a[i]] == 1)
                f[j] = 1;
        }
    }
    cout << (f[s] ? "YES" : "NO");
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