#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
using namespace std;
void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    vector<int> a(x), b(y), c(z);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    for (auto &i : c)
        cin >> i;
    int i = 0, j = 0, k = 0;
    int ok=0;
    while (i < x && j < y && k < z)
    {
        if (a[i] == b[j] && a[i] == c[k])
        {
            cout<<a[i]<<" ";
            i++; j++; k++;
            ok++;
            continue;
        }
        if(a[i]<b[j]) i++; 
        else if(b[j]<c[k]) j++;
        else k++;
    }
    if(ok==0) cout<<"NO";
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