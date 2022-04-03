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
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            cout << i + 1 << endl;
            break;
        }
    }
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