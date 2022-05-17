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
    int n;
    cin >> n;
    int a[n + 1], l[n + 1], r[n + 1];
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    stack<int> st;
    for (int i = 1; i <= n; ++i)
    {
        while (!st.empty() && a[st.top()] >= a[i])
        {
            st.pop();
        }
        if (st.empty())
            l[i] = 1;
        else
            l[i] = st.top() + 1;
        st.push(i);
    }

    while (!st.empty())
        st.pop();
    for (int i = n; i >= 1; --i)
    {
        while (!st.empty() && a[st.top()] >= a[i])
        {
            st.pop();
        }
        if (st.empty())
            r[i] = n;
        else
            r[i] = st.top() - 1;
        st.push(i);
    }

    long long ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        long long s = (long long)a[i] * (r[i] - l[i] + 1);
        ans = max(ans, s);
    }
    cout << ans;
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