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
	cout << "Buoc 0: " << a[0] << endl;
	for (int i = 1; i < n; i++)
	{
		int x = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > x)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = x;
		cout << "Buoc " << i << ": ";
		for(int t=0;t<=i;t++) cout<<a[t]<<" ";
		cout<<endl;
	}
}
int main()
{
	int t = 1;
	//cin >> t;
	while (t--)
	{
		solve();
		cout << endl;
	}
	return 0;
}