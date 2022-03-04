#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <stack>
#include <queue>
#include <set>
using namespace std;
int n;
vector<int> a(15);
void Try(int k)
{
    if (k == n + 1)
        return;
    cout << "[";
    int i;
    for (i = 1; i <= n - k; i++)
    {
        cout << a[i] + a[i + 1] << " ";
        a[i]+=a[i+1];
    }
    cout << a[i] + a[i + 1];
        a[i]+=a[i+1];
    cout << "]\n";
    Try(k+1);
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << "[";
    for (int i = 1; i <= n-1; i++)
    {
        cout << a[i] << " ";
    }
    cout<<a[n] << "]\n";
    Try(2);
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