#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
int n, k;
char x;
vector<int> a(50), b(50);
vector<string> res;
int check()
{
    vector<int> tmp;
    for (int i = 1; i <= n; i++)
    {
        if (b[i] != 0)
        {
            tmp.push_back(a[i]);
        }
    }
    if (tmp.size() == 1)
        return 0;
    for (int i = 1; i < tmp.size(); i++)
    {
        if (tmp[i] < tmp[i - 1])
        {
            return 0;
        }
    }
    string s = "";
    for (int i = 0; i < tmp.size(); i++)
    {
        s = s + to_string(tmp[i]) + " ";
    }
    res.push_back(s);
    return 1;
}
void in()
{
    for (int i = 1; i <= n; i++)
    {
        // if (b[i] != 0)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
void Try(int j)
{
    for (int i = 0; i <= 1; i++)
    {
        b[j] = i;
        if (j == n)
        {
            if (check())
            {
            }
        }
        else
            Try(j + 1);
    }
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Try(1);
    sort(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
        cout<<endl;
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