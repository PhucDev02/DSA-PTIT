#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
struct data
{
    int x, y;
};
int cmp(data a, data b)
{
    return a.y < b.y;
}
void solve()
{
    int n;
    cin >> n;
    data a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i].x;
    for (int i = 0; i < n; i++)
        cin >> a[i].y;
    sort(a, a+n, cmp);
    int res = 1, tmp = a[0].y;
    for (int i = 1; i < n; i++)
    {
        if (a[i].x >=tmp)
        {
            tmp = a[i].y;
            res++;
        }
    }
    cout << res;
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