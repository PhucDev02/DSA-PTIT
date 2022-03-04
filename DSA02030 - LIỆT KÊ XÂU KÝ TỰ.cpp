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
    for (int i = 1; i <= k; i++)
    {
        cout << char(a[i] + 64);
        // cout << i;
    }
    cout << endl;
}
void Try(int i)
{
    for (int j = a[i - 1]; j <= n; j++)
    {
        a[i] = j;
        if (i == k)
        {
             in();
        }
        else
           Try(i + 1);
    }
}
void solve()
{
    cin >> x >> k;
    n = x - 64;
    a[0] = 1;
    Try(1);
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