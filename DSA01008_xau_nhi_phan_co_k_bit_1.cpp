#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
int n, k;
vector<int> a(10000);
bool check()
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == 1)
			dem++;
	}
	if (dem == k)
		return 1;
	else
		return 0;
}
void solve()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		a[i] = 0;
	}
	if (check() == 1)
	{
		for (int j = 1; j <= n; j++)
			cout << a[j];
		cout << endl;
	}
	int i = n;
	while (i > 0)
	{
		if (a[i] == 0)
		{
			a[i] = 1;
			for (int j = i; j <= n; j++)
			{
				a[j + 1] = 0;
			}
			if (check() == 1)
			{
				for (int j = 1; j <= n; j++)
					cout << a[j];
				cout << endl;
			}
			i = n;
		}
		else
			i--;
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