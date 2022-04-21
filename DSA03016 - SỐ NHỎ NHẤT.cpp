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
    int s, d;
    cin >> s >> d;
    if (s > 9 * d)
    {
        cout << -1;
        return;
    }
    int a[d] = {1};
    s--; // 100...
    for (int i = d - 1; i >= 1; i--)
    {
        if (s >= 9)
        {
            a[i] = 9;
            s -= 9;
        }
        else
        {
            a[i] = s;
            s = 0;
        }
    }
    a[0] += (s > 0 ? s : 0);
    for (int i = 0; i < d; i++)
    {
        cout << a[i];
    }
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