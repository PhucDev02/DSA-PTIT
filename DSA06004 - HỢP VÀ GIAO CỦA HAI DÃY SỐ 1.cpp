#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
#include <map>
using namespace std;
void solve()
{
	int n, m, x;
	cin >> n >> m;
	map<int, int> a, b, c;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		a[x]++;
		c[x]++;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> x;
		b[x]++;
		c[x]++;
	}
	for (auto i : c)
		cout << i.first << " ";
	cout << endl;
	for (auto i : a)
	{
		if (b[i.first] > 0)
			cout << i.first << " ";
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