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
bool check(string s, int n)
{
    int x = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        x = (x * 10 + (s[i] - '0')) % n;
    }
    return x == 0;
}

void solve()
{
    int n;
    cin >> n;
    queue<string> q;
    q.push("1");
    while (true)
    {
        string s = q.front();
        q.pop();

        if (check(s, n))
        {
            cout << s;
            return;
        }

        q.push(s + "0");
        q.push(s + "1");
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