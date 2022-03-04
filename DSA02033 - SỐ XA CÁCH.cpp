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
        cout << a[i];
    }
    cout << endl;
}
int check()
{
    for (int i = 2; i <= n; i++)
    {
        if (abs(a[i] - a[i - 1]) == 1)
            return 0;
    }
    return 1;
}
void solve()
{
    cin >> n;
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}