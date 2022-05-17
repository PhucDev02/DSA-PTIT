#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] != ')')
            st.push(s[i]);
        else
        {
            bool ok = false;
            while (!st.empty())
            {
                char c = st.top();
                st.pop();
                if (c == '+' || c == '-' || c == '*' || c == '/')
                    ok = true;
                if (c == '(')
                    break;
            }
            if (!ok)
            {
                cout << "Yes";
                return;
            }
        }
    }
    cout << "No";
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