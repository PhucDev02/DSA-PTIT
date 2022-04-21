#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
int n;
int f[10005]; // f[i] là cách tách thành bình phương ít nhất
void tinh()
{
    for (int i = 1; i <= 10000; i++)
    {
        f[i] = i;
        for (int j = 1; j <= sqrt(i); j++)
        {
            f[i] = min(f[i], f[i - j * j] + 1);
            //tìm số cộng ở trước nhỏ hơn
        }
    }
}
void solve()
{
    cin>>n;
    cout<<f[n];
}
int main()
{
    int t = 1;
    cin >> t;
    tinh();
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}