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
	vector<int> a(n);
	int s = 1e9;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.begin() + n);
	for (int i = 1; i < n; i++)
		s = min(s, a[i] - a[i - 1]);
	cout << s;
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