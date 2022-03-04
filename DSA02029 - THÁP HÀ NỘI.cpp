#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <set>
using namespace std;
int n;
void Try(int n,char nguon,char trunggian,char dich)
{
    if(n==1)
    {
        cout<<nguon<<" -> "<<dich<<endl;
        return ;
    }
    Try(n-1,nguon,dich,trunggian);
    Try(1,nguon,trunggian,dich);
    Try(n-1,trunggian,nguon,dich);
}
void solve()
{
    cin>>n;
    Try(n,'A','B','C');
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}