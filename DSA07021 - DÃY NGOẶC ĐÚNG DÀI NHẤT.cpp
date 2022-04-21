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
    string s;
    cin >> s;
    stack<int> st;
    int res = 0;
    st.push(-1);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            st.push(i);
        else
        {
            st.pop();
            if (st.size() > 0)
                res = max(res, i - st.top());
           else
                st.push(i);
        }
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