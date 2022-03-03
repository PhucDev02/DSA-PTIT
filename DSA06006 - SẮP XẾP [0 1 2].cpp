#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int x;
int cmp(int a, int b)
{
    return abs(a-x)<abs(b-x);
}
void solve()
{
    int n;
    cin >> n;
    //cin >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
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