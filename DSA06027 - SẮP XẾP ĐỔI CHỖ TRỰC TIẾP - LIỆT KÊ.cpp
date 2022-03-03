#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
#include <map>
#include <stack>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	int a[n];
	stack<string> res;
	string tmp;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n - 1; i++)
	{
		tmp="";
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
				swap(a[i], a[j]);
		}
		tmp+="Buoc "+ to_string(i+1) +": ";
		for (int j = 0; j < n; j++)
			tmp+=to_string(a[j])+" ";
		res.push(tmp);
	}
	while(res.size()!=0)
	{
		cout<<res.top()<<endl;
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