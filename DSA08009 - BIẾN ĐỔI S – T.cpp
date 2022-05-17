#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
#include <sstream>
#define ll long long
using namespace std;
void solve()
{
    int s, t;
    cin >> s >> t;
    queue<pair<int, int>> q;
    map<int, bool> mp;
    q.push({s, 0});
    while (q.size())
    {
        pair<int, int> p = q.front();
        q.pop();
        if (p.first == t)
        {
            cout << p.second;
            return;
        }
        if (p.first - 1 == t || p.first * 2 == t)
        {
            cout << p.second + 1;
            return;
        }
        if (p.first < t && mp[p.first * 2] == 0)
        {
            q.push({p.first * 2, p.second + 1});
            mp[p.first * 2] = 1;
        }
        if (p.first >=1 && mp[p.first -1] == 0)
        {
            q.push({p.first -1, p.second + 1});
            mp[p.first -1] = 1;
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