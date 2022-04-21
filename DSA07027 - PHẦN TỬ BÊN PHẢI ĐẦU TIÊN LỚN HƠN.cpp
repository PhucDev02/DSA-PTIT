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
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), r(n);
    stack<int> st;
    for (int i=0;i<n;i++)
        cin >> a[i];
    for (int i = n - 1; i >= 0; i--)
    {
        while (st.size() && st.top() <= a[i])
        {
            st.pop();
        }
        if (st.empty())
            r[i] = -1;
        else
            r[i] = st.top();
        st.push(a[i]);
    }
    for (int i : r)
        cout << i << " ";
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