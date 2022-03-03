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
	vector<long long> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	string res="NO";
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			long long k = a[i] * a[i] + a[j] * a[j];
			long long x = sqrt(k);
			if (x * x == k && binary_search(a.begin() + j + 1, a.begin() + n, x))
			{
				res = "YES";
				break;
			}
		}
		if (res == "YES")
			break;
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
	return 0;
}