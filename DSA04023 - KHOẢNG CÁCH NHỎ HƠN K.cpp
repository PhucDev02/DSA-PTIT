#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    long long res = 0;
    for (int i = 0; i < n; i++)
    {
        res += lower_bound(a.begin()+i+1,a.end(),a[i]+k)-a.begin()-i-1;
    }
    // a[i] - a[j] < k;
    cout<< res;
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