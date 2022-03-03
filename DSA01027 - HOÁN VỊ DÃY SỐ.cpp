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
	int n;D:\Kì 4\DSA\CodePTIT\DSA-PTIT\DSA01005_sinh_hoan_vi.cpp
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	//cout << a.size();
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++)
		cout << a[i]<<" ";
	cout << endl;

	while (next_permutation(a.begin(), a.end()))
	{
		for (int i = 0; i < n; i++)
			cout << a[i]<<" ";
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