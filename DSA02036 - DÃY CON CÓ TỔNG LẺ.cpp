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
vector<int> a(20, 0), np(20, 0);
int cmp(int a, int b)
{
    return a > b;
}
void in()
{
    for (int i = 0; i < n; i++)
    {
        if (np[i] == 1)
            cout << a[i] << " ";
    }
    cout << endl;
}
void Try(int i, int sum)
{
    for (int j = 0; j <= 1; j++)
    {
        np[i] = j;
        if (i == n - 1)
        {
            if ((sum + a[i] * j) % 2 == 1)
            {
                in();
            }
        }
        else
            Try(i + 1, sum + j * a[i]);
    }
}
void solve()
{
    a.clear();
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.begin() + n, cmp);
    // for(int i=n-1;i>=0;i--) cout<<a[i];
    Try(0, 0);
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