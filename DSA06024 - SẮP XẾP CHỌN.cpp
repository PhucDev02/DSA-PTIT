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
		int index = i;
		int min = 999;
		for (int j = i; j < n; j++)
		{
			if (a[j] < min)
			{
				index = j;
				min = a[j];
			}
		}
		swap(a[index], a[i]);
		cout << "Buoc " << i + 1 << ": ";
		for (int j = 0; j < n; j++)
			cout << a[j] << " ";
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