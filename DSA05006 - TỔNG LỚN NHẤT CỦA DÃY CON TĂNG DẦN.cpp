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
    int n, s = 0;
    cin >> n;
    int a[n], f[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        f[i] = a[i];
        for (int j = i; j >=0 ; j--)
        {
            if (a[i] >a[j])
                f[i] = max(f[i], f[j] + a[i]);
        }
        s = max(s, f[i]);
    }
    cout<<s;
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