#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
#define maxx 105
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    long long res = 0;
    for (int i = 0; i < a.size(); i++)
    {
        res+=(upper_bound(a.begin()+i+1,a.end(),k-a[i])-lower_bound(a.begin()+i+1,a.end(),k-a[i]));
    }
    cout << res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        solve();
        cout << endl;
    }
    return 0;
}