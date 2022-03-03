#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
int n, k;
vector<int> a(10000);
bool check()
{
	int dem = 0;
	if(a[1]==1||a[n]==0) return 0;
	for (int i = 2; i <= n; i++)
	{
		if (a[i] ==0&&a[i-1]==0)
			return 0;
	}
	return 1;
}
void show()
{
	for(int i=1;i<=n;i++)
	{
		if(a[i]==0) cout<<'H';
		else cout<<'A';
	}	
	cout<<endl;
}
void solve()
{
	cin >> n ;
	for (int i = 1; i <= n; i++)
	{
		a[i] = 1;
	}
	if (check() == 1)
	{
		show();
	}
	int i = n;
	while (i > 0)
	{
		if (a[i] == 1)
		{
			a[i] = 0;
			for (int j = i; j <= n; j++)
			{
				a[j + 1] = 1;
			}
			if (check() == 1)
			{
				show();
			}
			i = n;
		}
		else
			i--;
	}
}
int main()
{
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	//	cout << endl;
	}
	return 0;
}