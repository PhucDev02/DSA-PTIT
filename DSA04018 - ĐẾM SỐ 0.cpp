#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
void solve()
{
    int n;
    cin >> n ;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x = -1;
    x = upper_bound(a.begin(), a.end(), 0) -a.begin();
    cout<<x;
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
}