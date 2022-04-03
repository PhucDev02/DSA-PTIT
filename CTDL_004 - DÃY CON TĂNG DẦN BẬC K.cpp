#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
vector<int> a(105);
int res = 0;
int n, k;
void Try(int i, int cnt) // day tang tai i cos cnt phan tu
{
    if (cnt == k)
    {
        res++;
        return;
    }
    if (i == n)
        return;
    for(int j=i;j<=n-1;j++)
    {
        if(a[j+1]>a[i])
        {
            Try(j+1,cnt+1);
        }
    }
}
void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n - k + 1; i++)
    {
        Try(i, 1);
    }
    cout<<res;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}