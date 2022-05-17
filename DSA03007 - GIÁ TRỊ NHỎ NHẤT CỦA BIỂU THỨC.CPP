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
	int n;
	cin >> n;
	vector<long long> a(n), b(n);
	for (auto &i : a)
		cin >> i;
	for (auto &i : b)
		cin >> i;
	sort(a.begin(), a.end());
	sort(b.rbegin(), b.rend());
	long long res = 0;
	for (int i = 0; i < n; ++i)
	{
		res += a[i] * b[i];
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