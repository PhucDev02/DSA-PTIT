#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
vector<long long> a(55,0);
void Try()
{
    a[1]=1;
    a[2]=2;
    a[3]=4;
    a[0]=1;
    for(int i=4;i<=50;i++)
    {
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
}
void solve()
{
    int n;
    cin>>n;
    cout<<a[n];
}
int main()
{
    int t = 1;
    cin >> t;
    Try();
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}