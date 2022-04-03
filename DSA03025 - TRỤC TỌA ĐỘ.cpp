#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
struct Data
{
    int x, y;
};
int cmp(Data x, Data y)
{
    return x.y < y.y;
}
void solve()
{
    int n;
    cin >> n;
    vector<Data> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].x >> a[i].y;
    }
    sort(a.begin(), a.end(), cmp);
    // sort by the end
    int tmp = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].x >= tmp)
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