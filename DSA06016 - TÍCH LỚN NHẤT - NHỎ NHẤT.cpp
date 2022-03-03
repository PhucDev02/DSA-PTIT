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
	int n, m, x, maxa = -1e9, minb = 1e9;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		maxa = max(maxa, x);
	}
	for (int i = 0; i < m; i++)
	{
		cin >> x;
		minb = min(minb, x);
	}
	cout << (long long)maxa * minb;
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