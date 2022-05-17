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
string s,e;
int l[6] = {3, 0, 2, 4, 1, 5};
int r[6] = {0, 4, 1, 3, 5, 2};
string trai(string a)
{
    string b = "";
    for (int i = 0; i < 6; i++)
        b += a[l[i]];
    return b;
}
string phai(string a)
{
    string b = "";
    for (int i = 0; i < 6; i++)
        b += a[r[i]];
    return b;
}
void solve()
{
	s=e="";
	for(int i=1;i<=6;i++)
	{
		int x;
		cin>>x;
		s+=to_string(x);
	}
	for(int i=1;i<=6;i++)
	{
		int x;
		cin>>x;
		e+=to_string(x);
	}
	queue<pair<string,int>> q;
	q.push({s,0});
	while(q.size())
	{
		pair<string,int> tmp=q.front();
		q.pop();
		if(tmp.first==e) {cout<<tmp.second; return ;}
		else
		{
			q.push({trai(tmp.first),tmp.second+1});
			q.push({phai(tmp.first),tmp.second+1});
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