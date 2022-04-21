#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
int f[1000005];
//=1 nếu xâu con từ l đến r là xâu đối xứng
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    memset(f, 0, sizeof(f));
    f[1]=a[1];
    f[2]=max(a[1],a[2]);
    for(int i=3;i<=n;i++) {
        f[i]=max(f[i-2]+a[i],f[i-1]);
    }
    cout<<f[n];
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