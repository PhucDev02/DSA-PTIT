#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
#include <map>
using namespace std;
#define vout                     \
	for (int i = 1; i <= k; i++) \
		cout << a[i];            \
	cout << endl;
vector<int> a(100), b(100);
int n, k;
bool check()
{
	for (int i = 1; i <= k; i++)
	{
		if (a[i] != b[i])
			return 0;
	}
	return 1;
}
void solve()
{
	cin >> n >> k;
	for (int i = 1; i <= k; i++)
	{
		cin >> b[i];
	}
	int dem = 1;
	for (int i = 1; i <= k; i++)
	{
		a[i] = i;
	}
	if (check())
	{
		cout << dem;
		return;
	}
	for (int i = k; i >= 1; i--)
	{
		if (a[i] != n - k + i)
		{
			a[i]++;
			for (int j = i + 1; j <= k; j++)
				a[j] = a[j - 1] + 1;
			i = k+1;
			dem++;
			if(check())
			{
				cout<<dem; return ;
			}
			// vout
		}
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