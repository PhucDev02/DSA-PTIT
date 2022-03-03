#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
int n;
vector<int> a(10000);
void solve()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		a[i] = 0;
	}
	for (int i = 1; i <= n; i++)
		cout << char('A' + a[i]);
		cout<<" ";
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
			for (int j = 1; j <= n; j++)
				cout << char('A' + a[j]);
			i=n;
			cout << " ";
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