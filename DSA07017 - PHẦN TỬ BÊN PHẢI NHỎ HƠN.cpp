#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
#include <sstream>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int smaller[n], greater[n];
    stack<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        while (s.size() && a[i] >= a[s.top()])
        {
            s.pop();
        }
        if (s.size() != 0)
            greater[i] = s.top();
        else
            greater[i] = -1;
        s.push(i);
    }
    while (s.size() != 0)
        s.pop();
    for (int i = n - 1; i >= 0; i--)
    {
        while (s.size() && a[s.top()] >= a[i])
        {
            s.pop();
        }
        if (s.size())
            smaller[i] = s.top();
        else
            smaller[i] = -1;
        s.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        if (greater[i] == -1)
        {
            cout << -1 << " ";
        }
        else
        {
            if (smaller[greater[i]] == -1)
                cout << -1 << " ";
            else
                cout << a[smaller[greater[i]]] << " ";
        }
    }
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
}