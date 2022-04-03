#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
int n;
vector<pair<int, int>> a(105);
void check()
{
    for (int i = 0; i < n; i++)
    {
        // cout<<a[i].second<<" ";
        if (a[i].second != n - 1 - a[n - i - 1].second)
        {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
}
void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.begin()+n);
    check();
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