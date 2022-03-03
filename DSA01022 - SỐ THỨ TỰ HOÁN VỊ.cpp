#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
#include <map>
#include <stack>
#include <deque>
using namespace std;
bool check(int n, vector<int> a, vector<int> b)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] != b[i])
			return 0;
	}
	return 1;
}
void solve()
{
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		b[i] = i + 1;
	}
	int dem = 1;
	if (check(n, a, b) == 1)
	{
		cout << dem;
		return;
	}
	while (next_permutation(b.begin(), b.end()))
	{
		dem++;
		if (check(n, a, b) == 1)
		{
			cout << dem;
			return;
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