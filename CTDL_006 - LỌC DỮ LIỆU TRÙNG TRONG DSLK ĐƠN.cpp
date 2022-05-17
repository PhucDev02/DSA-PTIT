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
    cin >> n;
    map<int, int> m;
    int x;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        m[x]++;
        if(m[x]==1) cout<<x<<" ";
    }
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}