#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
#include <sstream>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> l(n), r(n);
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        while (s.size() != 0 && a[s.top()] >= a[i])
        {
            s.pop();
        }
        if (s.size() != 0)
            l[i] = s.top()+1;
        else l[i]=0;
        s.push(i);
    }
    while (s.size() != 0)
        s.pop();
    for (int i = n - 1; i >= 0; i--)
    {
        while (s.size() != 0 && a[s.top()] >= a[i])
        {
            s.pop();
        }
        if (s.size() != 0)
            r[i] = s.top()-1;
        else r[i]=n-1;
        s.push(i);
    }
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        if (r[i] - l[i] + 1 >= a[i])
            res = max(res, a[i]);
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
}