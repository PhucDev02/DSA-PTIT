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
	int m, n;
	cin >> m >> n;
	int a[m][n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
	int res = -1;
	for (int i = 1; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == 1)
			{
				a[i][j] += a[i - 1][j];
			}
		}
	}
	int l[n], r[n];
	stack<int> s;
	res = -1;
	for (int k = 0; k < m; k++)
	{
		while (s.size() != 0)
			s.pop();
		for (int i = 0; i < n; i++)
		{
			while (s.size() && a[k][s.top()] >= a[k][i])
			{
				s.pop();
			}
			if (s.size())
				l[i] = s.top() + 1;
			else
				l[i] = 0;
			s.push(i);
		}
		while (s.size() != 0)
			s.pop();
		for (int i = n - 1; i >= 0; i--)
		{
			while (s.size() && a[k][s.top()] >= a[k][i])
			{
				s.pop();
			}
			if (s.size())
				r[i] = s.top() - 1;
			else
				r[i] = n - 1;
			s.push(i);
		}
		for (int i = 0; i < n; i++)
		{
			res = max(res, a[k][i] * (r[i] - l[i] + 1));
		}
	}
	cout << res;
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