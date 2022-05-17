#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
#include <sstream>
#define ll long long
using namespace std;
bool check(string s, int n)
{
    int x = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        x = (x * 10 + (s[i] - '0')) % n;
    }
    return x == 0;
}

void solve()
{
    int n;
    cin >> n;
    queue<long long> q;
    q.push(9);
    while (true)
    {
        long long s = q.front();
        q.pop();
    if(s%n==0)
    {
        cout<<s;
        break;
    }
        q.push(s*10 + 0);
        q.push(s*10 + 9);
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