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
	int n, k, x;
	cin >> n >> k;
	vector<int> a, b;
	map<int, int> m;
	b.push_back(0);
	a.push_back(0);
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		m[x]++;
		if (m[x] == 1)
			b.push_back(x);
	}
	sort(b.begin() + 1, b.end());
	n = b.size()-1;
	// for (int i = 1; i < n; i++)
	// 	cout << b[i] << " ";
	for (int i = 1; i <= k; i++)
		a.push_back(i);
	for(int i=1;i<=k;i++)
	{

	}
	for (int i = 1; i <=k; i++)
		cout << b[a[i]] << " ";
	cout << endl;
	for (int i = k; i >= 1; i--)
	{
		if (a[i] != n - k + i)
		{
			a[i]++;
			for (int j = i + 1; j <= k; j++)
				a[j] = a[j - 1] + 1;
			i = k + 1;
			for (int j = 1; j <= k; j++)
				cout << b[a[j]] << " ";
			cout << endl;
		}
	}
}
int main()
{
	int t = 1;
	// cin >> t;
	while (t--)
	{
		solve();
		cout << endl;
	}
	return 0;
}