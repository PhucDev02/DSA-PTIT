#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <set>
using namespace std;
string s;
vector<int> a(100);
void solve()
{
    cin >> s;
    int n = s.length();
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
    cout << s << " ";
    while (next_permutation(a.begin() + 1, a.begin() + 1 + n))
    {
        for(int i=1;i<=n;i++)
        {
            cout<<s[a[i]-1];
        }
        cout<<" ";
    }
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