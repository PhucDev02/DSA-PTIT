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
void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		a[i] = i + 1;
	for (int i = 0; i < n; i++)
		cout << a[i];
	cout << " ";
	while(next_permutation(a.begin(),a.end()))
	{
		for (int i = 0; i < n; i++)
			cout << a[i];
		cout << " ";
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