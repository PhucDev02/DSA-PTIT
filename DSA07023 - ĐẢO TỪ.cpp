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
    stack<string> st;

    string s, tmp;
    
    getline(cin, tmp);
    
    stringstream ss(tmp);
    
    while (ss >> s)
    {
        st.push(s);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}
int main()
{
    int t = 1;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
        cout << endl;
    }
}