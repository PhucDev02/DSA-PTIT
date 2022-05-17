#include <bits/stdc++.h>
using namespace std;
int V, E, u;
vector<int> ds[1000 + 5];
void solve()
{
    for (int i = 1; i <= V; i++)
    {
        ds[i].clear();
    }
    cin >> V >> E;
    for (int i = 1; i <= E; i++)
    {
        int a, b;
        cin >> a >> b;
        ds[a].push_back(b);
        ds[b].push_back(a);
    }
	int chan=0,le=0;
	for(auto i:ds)
	{
		if(i.size()%2==0) chan++;
		else le++;
	}
	if(le==0)
	{
		cout<<2;
		return ;
	}
	if(le==2)
	{
		cout<<1;
		return ;
	}
	cout<<"0";
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
		cout<<endl;
    }
    return 0;
}