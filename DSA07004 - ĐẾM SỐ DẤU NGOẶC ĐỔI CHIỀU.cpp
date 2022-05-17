#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    int open = 0, close = 0; //so dau dong,mo con lai
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '(')
        {
            open++;
            st.push(s[i]);
        }
        else
        {
            if (!st.empty() && st.top() == '(')
            {
                open--;
                st.pop();
            }
            else
            {
                close++;
                st.push(s[i]);
            }
        }
    }
    int res = open / 2 + close / 2; //))))
    res += open % 2 + close % 2;   //)(((
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