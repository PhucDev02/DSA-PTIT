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
    cin >> s;
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            int z;
            if (s[i] == '+')
                z = x + y;
            if (s[i] == '-')
                z = -y + x;
            if (s[i] == '*')
                z = x * y;
            if (s[i] == '/')
                z = x / y;
            st.push(z);
        }
        else
            st.push(s[i] - '0');
    }
    cout << st.top();
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