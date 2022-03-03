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
	int a[n], b[n], res = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a + n);
	int l,r;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			l=i; break;
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]!=b[i])
		{
			r=i; break;
		}
	}
	cout<<l+1<<" "<<r+1;
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