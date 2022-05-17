#include <bits/stdc++.h>
using namespace std;
pair<int, int> a[15][15];
int n;
vector<string> res;
void Try(int i, int j, string s)
{
	// dlru
	// cout << s << endl;
	if (i == n && j == n)
	{
		res.push_back(s);
		return;
	}
	if (i + 1 <= n && a[i + 1][j].second == 0 && a[i + 1][j].first == 1)
	{
		a[i + 1][j].second = 1;
		Try(i + 1, j, s + "D");
		a[i + 1][j].second = 0;
	}
	if (j - 1 >= 1 && a[i][j - 1].second == 0 && a[i][j - 1].first == 1)
	{
		a[i][j - 1].second = 1;
		Try(i, j - 1, s + "L");
		a[i][j - 1].second = 0;
	}
	if (j + 1 <= n && a[i][j + 1].second == 0 && a[i][j + 1].first == 1)
	{
		a[i][j + 1].second = 1;
		Try(i, j + 1, s + "R");
		a[i][j + 1].second = 0;
	}
	if (i - 1 >= 0 && a[i - 1][j].second == 0 && a[i - 1][j].first == 1)
	{
		a[i - 1][j].second = 1;
		Try(i - 1, j, s + "U");
		a[i - 1][j].second = 0;
	}
}
void solve()
{
	res.clear();
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j].first;
			a[i][j].second = 0;
		}
	a[1][1].second = 1;
	Try(1, 1, "");
	if (res.size() == 0)
	{
		cout << -1;
		return;
	}
	else
	{
		for (auto i : res)
			cout << i << " ";
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