#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
int f[101][25001];
void solve()
{
    int n, M;
    cin >> M >> n;
    memset(f, 0, sizeof(f));
    vector<int> m(n + 5);
    for (int i = 1; i <= n; i++)
    {
        cin >> m[i];
    }
    // f[i][j] là giá trị bốc được với giới hạn j khi xét đến vật i
    // nếu lấy vật i : f[i][j]=f[i-1][j-m[i]]+value[i]
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            f[i][j] = f[i - 1][j];
            if (j >= m[i])
            {
                f[i][j] = max(f[i][j], f[i - 1][j - m[i]] + m[i]);
            }
        }
    }
    cout << f[n][M];
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