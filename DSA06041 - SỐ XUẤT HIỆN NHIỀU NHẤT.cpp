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
	int n;
	cin >> n;
	vector<int> a(n + 1);
	int maxx = -1, val = -1;
	map<int, int> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		m[a[i]]++;
		if (m[a[i]] > maxx)
		{
			maxx = m[a[i]];
			val = a[i];
		}
	}
	if (maxx > (float)n / 2)
		cout << val;
	else
		cout << "NO" << endl;
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