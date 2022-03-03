#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
#include <map>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    map<int,int> f;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        f[a[i]]++;
    }
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==k-a[i])
        {
            dem+=(f[a[i]]-1);
        }
        else
        {
            dem+=f[k-a[i]];
        }
    }
    cout<<dem/2;
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