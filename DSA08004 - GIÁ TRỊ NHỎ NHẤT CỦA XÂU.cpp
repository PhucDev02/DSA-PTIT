#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int k;
    string s;
    cin >> k >> s;
    map<char, int> m;
    priority_queue<long long> q;
    for (int i = 0; i < s.length(); i++)
        m[s[i]]++;
    for (auto i : m)
        if (i.second > 0)
            q.push(i.second);
    while (k--)
    {
        if (q.empty())
            break;
        int x = q.top();
        q.pop();
        q.push(x - 1);
    }
    long long res = 0;
    while (q.size())
    {
        res += q.top() * q.top();
        q.pop();
    }
    cout << res;
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