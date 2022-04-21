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
    string s;
    cin >> s;
    int n = s.length();
    s = "#" + s;
    vector<long long> f(n + 5, 0);
    f[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == '0')
        {
            if (i == 1 || (s[i - 1] != '1' && s[i - 1] != '2'))
            {
                cout << 0;
                return;
            }
            f[i] = f[i - 2];
        }
        else
        {
            // Ghép s[i] vào cuối các cấu hình của f[i - 1], ta được f[i - 1] cấu hình của f[i]
            f[i] = f[i - 1];
            // Nếu s[i] và s[i - 1] ghép được thành 1 số, ta lại coi (s[i] + s[i - 1]) là 1 số
            // và ghép vào cuối các cấu hình của f[i - 2], ta được thêm f[i - 2] cấu hình khác
            if (i >= 2 && (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6')))
                f[i] += f[i - 2];
        }
    }
    cout << f[n];
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