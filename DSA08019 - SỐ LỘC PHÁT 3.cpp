#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <set>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    stack<string> res;
    queue<string> q;
    q.push("6");
    q.push("8");
    while(q.size()!=0)
    {
        string k=q.front();
        res.push(k);
        q.pop();
        if(k.size()<n)
        {
            q.push(k+"6");
            q.push(k+"8");
        }
    }
    cout<<res.size()<<"\n";
    while(res.size())
    {
        cout<<res.top()<<" ";
        res.pop();
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
    return 0;
}