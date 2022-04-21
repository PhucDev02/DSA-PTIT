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
   cin>>s;
   stack<char> st;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]=='}'&&st.size()&&st.top()=='{')
       {
           st.pop();
       }
       else if(s[i]==']'&&st.size()&&st.top()=='[') st.pop();
       else if(s[i]==')'&&st.size()&&st.top()=='(') st.pop();
       else st.push(s[i]);
   }
   cout<<(st.empty()?"YES":"NO");
}
int main()
{
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}