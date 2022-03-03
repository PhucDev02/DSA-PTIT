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
	int n, m;
	cin >> n >> m;
	vector<int> a(n + m);
	for (int i = 0; i < n + m; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	for (int i = 0; i < n + m; i++)
		cout << a[i] << " ";
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