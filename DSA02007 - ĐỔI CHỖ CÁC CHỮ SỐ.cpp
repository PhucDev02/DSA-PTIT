#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
using namespace std;
string s, res;
int k;
void Try(int k)
{
    if (k == 0)
        return;
    int n = s.length();
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (s[j] > s[i])
            {
                swap(s[i], s[j]);
                if (s.compare(res) > 0)
                    res = s;
                Try(k - 1);
                swap(s[i], s[j]);
            }
        }
}
void solve()
{
    cin >> k;
    cin >> s;
    res = s;
    Try(k);
    cout << res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}