#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
int f[104][104][104];
void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    string a, b, c;
    cin >> a >> b >> c;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            for (int k = 1; k <= z; k++)
            {
                if (a[i - 1] == b[j - 1] && b[j - 1] == c[k - 1])
                {
                    f[i][j][k] = f[i - 1][j - 1][k - 1] + 1;
                }
                else
                {
                    f[i][j][k] = max(f[i][j][k-1], max(f[i][j-1][k],f[i - 1][j][k]));
                }
            }
        }
    }
    cout << f[x][y][z];
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