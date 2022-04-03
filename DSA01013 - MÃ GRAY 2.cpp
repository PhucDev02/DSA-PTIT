#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
#define mod 1000000007
long long f[100000 + 12];
void solve()
{
    string s;
    cin>>s;
    string res="";
    res.push_back(s[0]);
    for(int i=1;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            res.push_back(1-(res[i-1]-48)+48);
        }
        else res.push_back(res[i-1]);
    }
    cout<<res;

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