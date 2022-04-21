#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int n, k;
string s;
vector<string> res;
void check()
{
    int dem = 0;
    int i = 0;
    while (i < n)
    {
        if (s[i]=='B')
            i++;
        int sum = 0;
        while (s[i] == 'A' && i < n)
        {
            sum++;
            i++;
        }
        if (sum == k)
            dem++;
    }
    if (dem == 1)
        res.push_back(s);
}
void Try(int i)
{
    for (int j = 'A'; j <= 'B'; j++)
    {
        s[i] = j;
        if (i == n - 1)
        {
            check();
        }
        else
            Try(i + 1);
    }
}
void solve()
{
    cin >> n >> k;
    res.clear();
    s = "";
    for (int i = 1; i <= n; i++)
        s += "a";
    Try(0);
    cout << res.size() << endl;
    for (auto i : res)
        cout << i << "\n";
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