#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <stack>
#include <queue>

using namespace std;
void solve()
{
    string s;
    cin >> s;
    stack<char> a, b;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '-' && a.size() != 0)
        {
            a.pop();
        }
        if (s[i] == '<' && a.size() != 0)
        {
            b.push(a.top());
            a.pop();
        }
        if (s[i] == '>' && b.size() != 0)
        {
            a.push(b.top());
            b.pop();
        }
        if (s[i] != '>' && s[i] != '<' && s[i] != '-')
            a.push(s[i]);
    }
    while (a.size() != 0)
    {
        b.push(a.top());
        a.pop();
    }
    while (b.size() != 0)
    {
        cout<<b.top();
        b.pop();
    }
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