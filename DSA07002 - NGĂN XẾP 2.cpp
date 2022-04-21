#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    int x;
    stack<int> v;
    while (n--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            cin >> x;
            v.push(x);
        }
        else if (s == "POP")
        {
            if (v.empty() == 0)
                v.pop();
        }
        else if (s == "PRINT")
            if (v.empty())
                cout << "NONE\n";
            else
            {
                    cout << v.top();
                cout << endl;
            }
    }
}
int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}