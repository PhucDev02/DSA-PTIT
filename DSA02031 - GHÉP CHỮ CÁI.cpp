#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
int n, k;
char x;
vector<int> a(50);
void in()
{
    for (int i = 1; i <= n; i++)
    {
        cout << char(a[i] + 64);
    }
    cout << endl;
}
int check()
{
    for (int i = 1; i <= n; i++)
    {
        if ((a[i] == 1 || a[i] == 5) && (a[i - 1] != 1 & a[i - 1] != 5) && (a[i + 1] != 1 & a[i + 1] != 5))
            return 0;
    }
    return 1;
}
void solve()
{
    cin >> x;
    n = x - 64;
    a[0] = a[n + 1] = 1;
    for (int i = 1; i <= n; i++)
        a[i] = i;
    if (check())
        in();
    while (next_permutation(a.begin() + 1, a.begin() + 1 + n))
    {
        if (check())
            in();
    }
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