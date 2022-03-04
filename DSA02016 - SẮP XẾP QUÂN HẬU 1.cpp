#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int n;
int a[100];
int dem;
void in()
{
    for (int i = 1; i <= n; i++)
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
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (check(i, j))
        {
            a[i] = j;
            if (i == n)
            {
                dem++;
            }
            else
                Try(i + 1);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        dem=0;
        for (int i = 1; i <= n; i++)
        {
            a[1] = i;
            Try(2);
        }
        cout<<dem<<endl;
    }
    return 0;
}