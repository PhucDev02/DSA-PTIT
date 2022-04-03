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
        int x;
    int f[n + 1] = {};
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        f[x] = f[x - 1] + 1;
    }
    cout << n - *max_element(f + 1, f + 1 + n);
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