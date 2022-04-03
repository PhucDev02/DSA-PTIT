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
void solve()
{
    cin >> n;
    int x;
    priority_queue<int, vector<int>, greater<int>> q;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        q.push(x);
    }
    long long s = 0;
    while (q.size() > 1)
    {
        int s1 = q.top();
        q.pop();
        int s2 = q.top();
        q.pop();
        int k = s1 + s2;
        s += k;
        q.push(k);
    }
    cout << s;
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