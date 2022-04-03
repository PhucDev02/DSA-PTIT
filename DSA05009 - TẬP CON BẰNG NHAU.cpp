#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
int n, sum, check;
vector<int> a(109);
void Try(int i,int s)
{
    if (check == 1 || s>sum||i>n)
        return;
    if (s==sum)
    {
        check=1;
        return;
    }
    Try(i+1,s+a[i]);
    Try(i+1,s);
    
}
void solve()
{
    sum = 0;
    check = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 2 == 0)
    {
        sum /= 2;
        Try(1, 0);
        if (check == 1)
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";
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