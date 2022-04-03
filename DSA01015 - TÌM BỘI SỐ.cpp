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
int stoii(string s)
{
    int res = 0;
    for (int i = 0; i < s.length(); i++)
    {
        res = res * 10 + (s[i] - 48);
        res %= n;
    }
    return res;
}
void solve()
{
    cin >> n;
    queue<string> q;
    q.push("9");
    while (1)
    {
        string s = q.front();
        q.pop();
        int x = stoii(s);
        if (x == 0)
        {
            cout << s;
            return;
        }
        q.push(s + "0");
        q.push(s + "9");
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
    return 0;
}