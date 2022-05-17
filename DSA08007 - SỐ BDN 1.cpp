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
string n, k;
bool check(string s)
{
	return s.size() < n.size() || (s.size() == n.size() && s <= n);
}
void solve()
{
    int d = 0;
    cin >> n;
    stack<string> st;
    st.push("1");
    while (st.size())
    {
        k = st.top();
        d++;
        st.pop();
        if (check(k + "0"))
            st.push(k + "0");
        if (check(k + "1"))
            st.push(k + "1");
    }
    cout << d ;
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