#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
int n, m;
string ans;
vector<int> w;
vector<int> v;
vector<vector<int>> f;
//code này lấy của bạn :v
void trace(int n, int k) {
    if (n == 0)
        return;
    if (f[n][k] == f[n - 1][k])
        trace(n - 1, k);
    else {
        trace(n - 1, k - w[n]);
        ans[n - 1] = '1';
    }
}

void solve() {
    cin >> n >> m;
    w.resize(n + 1);
    v.resize(n + 1);
    ans.resize(n, '0');
    f.resize(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    for (int i = 1; i <= n; ++i) {
        cin >> w[i];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (j >= w[i])
                f[i][j] = max(f[i - 1][j], f[i - 1][j - w[i]] + v[i]);
            else
                f[i][j] = f[i - 1][j];
        }
    }
    cout << f[n][m] << endl;
    trace(n, m);
    for (char i : ans) cout << i << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        solve();
        cout << "\n";
    }
    return 0;
}