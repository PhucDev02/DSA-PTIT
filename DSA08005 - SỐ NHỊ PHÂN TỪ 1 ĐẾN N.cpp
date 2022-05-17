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
void solve()
{
    int n;
    cin>>n;
    queue<string> q;
    q.push("1");
    while(n--)
    {
        string tmp=q.front();
        q.pop();
        cout<<tmp<<" ";
        q.push(tmp+"0");
        q.push(tmp+"1");
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