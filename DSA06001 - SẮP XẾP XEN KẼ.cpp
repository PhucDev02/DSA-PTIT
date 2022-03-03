#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int i=0,j=n-1;
    while(i<j)
    {
        cout<<a[j--];
        cout<<" ";
        cout<<a[i++];
        cout<<" ";
    }
    if(i==j) cout<<a[i];
}
int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}