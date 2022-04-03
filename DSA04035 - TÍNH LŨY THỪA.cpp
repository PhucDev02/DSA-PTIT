#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
#define modd 1000000007
void solve()
{
}
long long poww(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long x = poww(a, b / 2) % modd;
    if (b % 2 == 0)
        return (x * x) % modd;
    else
        return (((x * x)%modd )* a) % modd;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (1)
    {
        // solve();
        long long a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            return 0;
        cout << poww(a, b);
        cout << endl;
    }
}