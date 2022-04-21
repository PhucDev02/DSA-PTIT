#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
int a[100];
int mt[10][10];
int res;
void in()
{
    for (int i = 1; i <= 8; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int check(int x, int y)
{
    for (int i = 1; i < x; i++)
    {
        if (a[i] == y || abs(x - i) == abs(y - a[i]))
            return 0;
    }
    return 1;
}
void Try(int i,int sum)
{
    for (int j = 1; j <= 8; j++)
    {
        if (check(i, j))
        {
            a[i] = j;
            if (i == 8)
            {
                res=max(res,sum+mt[i][j]);
            }
            else
                Try(i + 1,sum+mt[i][j]);
        }
    }
}
void solve()
{
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
            cin >> mt[i][j];
    }
    res=0;
    for (int i = 1; i <= 8; i++)
    {
        a[1] = i;
        Try(2,mt[1][i]);
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