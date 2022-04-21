#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
#include <sstream>
using namespace std;
int prio(char c)
{
    if (c == '^')
        return 4;
    if (c == '*' || c == '/')
        return 3;
    if (c == '+' || c == '-')
        return 2;
    return 1;
}

void solve()
{
    string s;
    cin >> s;
    string res = "";
    stack<char> st;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            while (st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
        {
            while (!st.empty() && prio(st.top()) >= prio(s[i]))
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        else
            res += s[i];
    }
    while (!st.empty())
    {
        if (st.top() != '(')
            res += st.top();
        st.pop();
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