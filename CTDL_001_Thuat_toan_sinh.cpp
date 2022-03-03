#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
bool thuannghich(string s)
{
    int n = s.size();
    for (int i = 0; i <= n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
            return 0;
    }
    return 1;
}
int n;
string s;
void show(string s)
{
    if (thuannghich(s) == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << s[i] << " ";
        }
        cout << endl;
    }
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        s[i] = (j + 48);
        if (i == n-1)
        {
            show(s);
        }
        else
            Try(i + 1);
    }
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        s += "a";
    Try(0);
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