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
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n - 1; i++)
	{
		int ok = true;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				ok = false;
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
		if (ok)
			break;
		cout << "Buoc " << (i + 1) << ": ";
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
}
int main()
{
	int t = 1;
	// cin >> t;
	while (t--)
	{
		solve();
		cout << endl;
	}
	return 0;
}