#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
// int n;
void solve()
{
    int k;
    string s;
    cin >>k>> s;
    map<int, int> m;
    int n = s.length();
    int maxx = 0;
    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
        maxx = max(m[s[i]], maxx);
    }
    if (maxx *k> n+1)
        cout << -1;
    else
        cout << 1;
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