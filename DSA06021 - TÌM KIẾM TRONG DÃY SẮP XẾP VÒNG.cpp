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
	int n,k,x,pos;
	cin>>n>>k;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x == k)
			pos = i;
	}
	cout << pos + 1 << endl;
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