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
    stack<int> st;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        while (st.size() && a[st.top()] <= a[i])
        {
            st.pop();
        }
        if (st.size())
        {
            // l[i] = st.top();
            cout<<i-st.top()<<" ";
        }
        else
           cout<<i+1<<" ";
        st.push(i);
    }
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