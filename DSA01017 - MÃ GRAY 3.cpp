#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
#define mod 1000000007
long long f[100000 + 12];
void solve()
{
    string s;
    // bit đầu tiên luôn giữ nguyên, kể từ bit thứ i của xâu gray
    // sẽ bằng bit thứ i của xâu nhị phân XOR với bit thứ i-1 của xâu nhị phân đó
    cin >> s;
    string res = "";
    res.push_back(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        res.push_back((s[i]-48)^(s[i-1]-48)+48);
    }
    cout << res;
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