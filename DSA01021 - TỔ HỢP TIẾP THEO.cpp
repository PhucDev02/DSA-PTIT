#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
#include <map>
using namespace std;
vector<int> a(100);
int n, k;
void solve()
{
	cin >> n >> k;
	map<int, int> b;
	for (int i = 1; i <= k; i++)
	{
		cin >> a[i];
		b[a[i]]++;
	}
	int check=0;
	for (int i = k; i >= 1; i--)
	{
		if (a[i] != n - k + i)
		{
			check=1;
			a[i]++;
			for (int j = i + 1; j <= k; j++)
				a[j] = a[j - 1] + 1;
			break;
		}
	}

	//135 145
	int dem=0;
	for (int i = 1; i <= k; i++)
	{
		if (b[a[i]] == 0)
			dem++;
	}
	if(check==1)
	{
		cout<<dem;
	}
	else cout<<k;
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