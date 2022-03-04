#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
int n, k;
char x;
vector<int> a(50);
void solve()
{

    int b[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    cin >> n;
    int res = 0;
    for (int i = 9; i >= 0; i--)
    {
        res +=n/b[i];
        n=n%b[i];
    }
    cout<<res;
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