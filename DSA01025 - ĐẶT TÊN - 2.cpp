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
		cout <<(char) (a[i]+64);            \
	cout << endl;
vector<int> a(100);
int n, k;
void solve()
{
	cin >> n >> k;
	for (int i = 1; i <= k; i++)
	{
		a[i] = i;
	}
	vout
	for (int i = k; i >= 1; i--)
	{
		if (a[i] != n - k + i)
		{
			a[i]++;
			for (int j = i + 1; j <= k; j++)
				a[j] = a[j - 1] + 1;
			i = k+1;
			vout
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