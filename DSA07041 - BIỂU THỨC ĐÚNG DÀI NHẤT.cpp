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
    string s;
    cin>>s;
    int res = 0;
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ')')
        {
            if (st.size() && st.top() == '(')
            {
                res += 2;
                st.pop();
            }
        }
        else
            st.push('(');
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
}