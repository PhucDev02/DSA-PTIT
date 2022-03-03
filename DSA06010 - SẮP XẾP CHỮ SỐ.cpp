#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
#include <map>
using namespace std;
void solve()
{
    int n, x, a[10] = {};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        while (x != 0)
        {
            int k = x % 10;
            a[k]++;
            x /= 10;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > 0)
            cout << i << " ";
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