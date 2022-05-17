#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <string>
using namespace std;
long long mod = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    string s;
    int x;
    queue<int> q;
    while (n--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            cin >> x;
            q.push(x);
        }
        else if (s == "POP")
        {
            if (!q.empty())
            {
                q.pop();
            }
        }
        else
        {
            if (q.empty())
                cout << "NONE";
            else
                cout << q.front();
            cout << endl;
        }
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