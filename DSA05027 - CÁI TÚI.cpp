#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
int f[1005][1005];
void solve()
{
    int n, M;
    cin >> n >> M;
    memset(f, 0, sizeof(f));
    vector<int> m(n + 5);
    vector<int> value(n + 5);
    for (int i = 1; i <= n; i++)
    {
        cin >> m[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> value[i];
    }
    // cout<<"heloo";
    // f[i][j] là giá trị bốc được với giới hạn j khi xét đến vật i
    // nếu lấy vật i : f[i][j]=f[i-1][j-m[i]]+value[i]
    //khoong laays thi = f[i-1][j]
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            f[i][j] = f[i - 1][j];
            if (j >= m[i])
            {
                f[i][j] = max(f[i][j], f[i - 1][j - m[i]] + value[i]);
            }
        }
    }
    cout << f[n][M];
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