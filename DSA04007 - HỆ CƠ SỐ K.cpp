#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
void solve()
{
    int n, k, check = 0;
    string s1, s2, s = "";
    cin >> k >> s1 >> s2;
    while (s1.size() < s2.size())
        s1 = '0' + s1;
    while (s2.size() < s1.size())
        s2 = '0' + s2;
    n = s1.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int x = s1[i] + s2[i] - 2 * '0';
        if (check == 1)
        {
            x++;
            check = 0;
        }
        if (x > k - 1)
        {
            check = 1;
            x -= k;
        }
        if (x >= 10)
            s = (char)('A' + x - 10) + s;
        else
            s = to_string(x) + s;
    }
    if (check == 1)
        s = '1' + s;
    cout << s;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}