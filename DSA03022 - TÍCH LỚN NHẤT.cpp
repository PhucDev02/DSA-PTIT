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
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a.begin(),a.end());
    vector<int> b;
    b.push_back(a[n-1]*a[n-2]);
    b.push_back(a[n-1]*a[n-2]*a[n-3]);
    b.push_back(a[n-1]*a[0]*a[1]);
    b.push_back(a[n-1]*a[n-2]*a[0]);
    sort(b.begin(),b.end());
    cout<<*(b.end()-1);
}
int main()
{
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}