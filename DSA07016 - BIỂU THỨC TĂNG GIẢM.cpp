#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <string>
using namespace std;
long long mod = 1e9 + 7;
void solve()
{
    string s;
    cin >> s;
    stack<int> st;
    int n = s.size();
    for (int i = 0; i <= n; i++)
    {
        if (s[i] == 'D')
            st.push(i + 1);
        else 
        {
            st.push(i + 1);
            while (!st.empty())
            {
                cout << st.top();
                st.pop();
            }
        }
    }
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}