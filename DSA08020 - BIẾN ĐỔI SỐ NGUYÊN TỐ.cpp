#include <bits/stdc++.h>
using namespace std;
#define maxx 10000
vector<int> snt(10000, 1);
void sang()
{
    snt[0] = snt[1] = 0;
    for (int i = 2; i * i < maxx; i++)
    {
        if (snt[i] == 1)
        {
            for (int j = i * i; j < maxx; j += i)
            {
                snt[j] = 0;
            }
        }
    }
}
int conv(string s)
{
    int res = 0;
    for (int i = 0; i < 4; i++)
    {
        res = res * 10 + (s[i] - 48);
    }
    return res;
}
void solve()
{
    string a, b;
    cin >> a >> b;
    queue<pair<string, int>> q;
    map<int, int> check;
    q.push({a, 0});
    if (a == b)
    {
        cout << 0;
        return;
    }
    while (1)
    {
        for (int i = 0; i < 4; i++)
        {
            string tmp = q.front().first;
            int dem = q.front().second;
            for (int j = 0; j <= 9; j++)
            {
                if (i == 0 && j == 0)
                    continue;
                tmp[i] = j + 48;
                int num = conv(tmp);
                if (snt[num] == 1 && check[num] == 0)
                {
                    check[num] = 1;
                    q.push({tmp, dem + 1});
                    if (q.back().first == b)
                    {
                        cout << q.back().second;
                        return;
                    }
                }
            }
        }
        q.pop();
    }
}
int main()
{
    int t = 1;
    cin >> t;
    sang();
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}