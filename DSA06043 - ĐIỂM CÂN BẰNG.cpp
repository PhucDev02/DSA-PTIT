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
	vector<int> a(n),b(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	b[0]=a[0];
	for(int i=1;i<n;i++)
	{
		b[i]=a[i]+b[i-1];
	}
	for(int i=1;i<n;i++)
	{
		if(b[i-1]==b[n-1]-b[i])
		{
			cout<<i+1;
			return;
		}
	}
	cout<<"-1";
	//2 3 4 5 6
	//2 5 9 14 20
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