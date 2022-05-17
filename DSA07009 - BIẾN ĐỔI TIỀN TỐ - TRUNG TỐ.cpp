#include <bits/stdc++.h>
using namespace std;
bool isOperator(char x)
{
    switch (x)
    {
    case '+':
    case '-':
    case '/':
    case '*':
    case '^':
    case '%':
        return true;
    }
    return false;
}
void solve()
{
    string s;
    cin >> s;
    stack<string> st;
    for (int i = s.length(); i >= 0; i--)
    {
        if(isOperator(s[i]))
        {
            string a,b;
            a=st.top(); st.pop();
            b=st.top(); st.pop();
            st.push("("+a+s[i]+b+")");
        }
        else
        {
            st.push(string(1,s[i]));
        }
    }
    cout<<st.top();
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