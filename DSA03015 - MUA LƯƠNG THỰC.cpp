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
    int n,s,m;
    cin>>n>>s>>m;
    if(n<m)
    {
        cout<<-1;
        return ;
    }
    if((n-m)*6<m)
    {
        cout<<-1;
        return ;
    }
    cout<<ceil(1.0*(s*m)/n);
}
int main()
{
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}