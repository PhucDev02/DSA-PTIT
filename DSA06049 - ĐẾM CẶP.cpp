#include <iostream>
#include <vector>
#include<algorithm>
#include <math.h>
#define endl "\n"
using namespace std;
void solve()
{
	int n, k;
	long long s = 0;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(),a.end());
	for (int i = 0; i < n; i++)
	{
		int x = lower_bound(a.begin() + i + 1, a.begin() + n, a[i] + k) - a.begin();
		s += x - i - 1;
	}
	cout << s;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
		cout << endl;
	}
}