#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
void solve()
{
    int x;
    string s;
    cin>>x>>s;
    cout<<x<<" ";
    if(next_permutation(s.begin(),s.end()))
    {
        cout<<s;
    }
    else cout<<"BIGGEST";
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