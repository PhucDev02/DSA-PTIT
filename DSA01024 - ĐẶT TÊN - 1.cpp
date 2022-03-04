#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <stack>
#include <queue>
#include <set>
using namespace std;
set<string> sett;
vector<string> s;
int n, k;
void solve()
{
    vector<string> s;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin >> tmp;
        sett.insert(tmp);
    }
    s.push_back("0");
    for (auto i : sett)
    {
        s.push_back(i);
    }
    //
    vector<int> a(k + 1);
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
    int ok = 0;
    n=sett.size();
    while (1)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << s[a[i]] << " ";
        }
        cout << endl;
        ok = 0;
        for (int i = k; i >= 1; i--)
        {
            if (a[i] != n - k + i)
            {
                ok = 1;
                a[i]++;
                for (int j = i + 1; j <= k; j++)
                {
                    a[j] = a[j - 1] + 1;
                }
                break;
            }
        }
        if (ok == 0)
            break;
    }
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