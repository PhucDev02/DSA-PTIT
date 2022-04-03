#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
#define modd 1000000007
void solve()
{
    int n, m;
    int k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    vector<int> c;
    int i = 0, j = 0;
    while (i < n || j < m)
    {
        if (j == m || (i <= n-1 && a[i] < b[j]))
        {
            c.push_back(a[i++]);
        }
        else c.push_back(b[j++]);
    }
    //for(i=0;i<n+m;i++) cout<<c[i]<<" ";
    cout<<c[k-1];
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