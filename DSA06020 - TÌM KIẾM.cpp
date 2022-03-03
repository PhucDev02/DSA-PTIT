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
	int n, x, k, res = -1;
		cin >> n >> k;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			if (x == k)
				res = 1;
		}
		cout << res ;
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