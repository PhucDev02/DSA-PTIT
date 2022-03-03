#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
#include <map>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.second > b.second)
		return 1;
	if (a.second == b.second && a.first < b.first)
		return 1;
	return 0;
}
void solve()
{
	int n;
	cin >> n;
	int a[n];
	map<int, int> f;
	vector<pair<int, int>> p;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		f[a[i]]++;
	}
	for (int i = 0; i < n; i++)
		p.push_back(make_pair(a[i], f[a[i]]));
	sort(p.begin(), p.end(), cmp);
	for (int i = 0; i < p.size(); i++)
		cout << p[i].first << ' ';
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