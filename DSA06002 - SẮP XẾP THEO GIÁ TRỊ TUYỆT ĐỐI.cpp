#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v[i].first = abs(a[i] - k);
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
        cout << a[v[i].second] << " ";
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
