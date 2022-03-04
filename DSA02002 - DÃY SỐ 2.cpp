#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <set>
using namespace std;
int n;
vector<int> a(15);
stack<string> res;
string tmp = "";
void Try(int k)
{
    tmp = "";
    if (k == n + 1)
        return;
    tmp += "[";
    int i;
    for (i = 1; i <= n - k; i++)
    {
        tmp = tmp + to_string(a[i] + a[i + 1]) + " ";
        a[i] += a[i + 1];
    }
    tmp = tmp + to_string(a[i] + a[i + 1]) + "]";
    a[i] += a[i + 1];
    res.push(tmp);
    Try(k + 1);
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    tmp += "[";
    for (int i = 1; i <= n - 1; i++)
    {
        tmp = tmp + to_string(a[i]) + " ";
    }
    tmp = tmp + to_string(a[n]) + "]";
    res.push(tmp);
    Try(2);
    while(res.size()!=0)
    {
        cout<<res.top()<<" ";
        res.pop();
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