#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
bool f[1005][1005];
//=1 nếu xâu con từ l đến j là xâu đối xứng
void solve()
{
    string s;
    cin >> s;
    int n = s.length(),res=1;;
    for (int i = 0; i <= n; i++)
        f[i][i] = 1;
    for (int k = 1; k < n; k++) //độ dài xâu con
    {
        for (int l = 0; l < n - k; l++)
        {
            int r = l + k;
            if (s[l] == s[r])
                if (k == 1)
                    f[l][r] = 1;
                else
                    f[l][r] = f[l + 1][r - 1];
            else
                f[l][r] = 0;
            if(f[l][r]==1) res=max(res,k+1);
        }
    }
    cout<<res;
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