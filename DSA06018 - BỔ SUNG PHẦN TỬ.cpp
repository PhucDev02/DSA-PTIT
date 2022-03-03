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
	int n, s = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	for (int i = 1; i < n; i++)
		if (a[i] != a[i - 1])
			s += a[i] - a[i - 1] - 1;
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