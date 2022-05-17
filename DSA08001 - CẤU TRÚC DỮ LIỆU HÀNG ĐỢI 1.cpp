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
    int x;
    queue<int> q;
    while (n--)
    {
        cin >> x;
        if (x == 1)
            cout << q.size() << endl;
        else if (x == 2)
        {
            if (q.empty())
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else if (x == 3)
        {
            cin >> x;
            q.push(x);
        }
        else if (x == 4)
        {
            if (!q.empty())
                q.pop();
        }
        else if (x == 5)
        {
            if (q.empty())
                cout << "-1\n";
            else
                cout << q.front() << endl;
        }
        else if (x == 6)
        {
            if (q.empty())
                cout << "-1\n";
            else
                cout << q.back() << endl;
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
    return 0;
}