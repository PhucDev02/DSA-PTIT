#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
#include <map>
using namespace std;
bool snt(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
void solve()
{
	int n, check = 0;
	cin >> n;
	for (int i = 2; i <= n / 2; i++)
	{
		if (snt(i) == 1 && snt(n - i) == 1)
		{
			check = 1;
			cout << i << " " << n - i << endl;
			break;
		}
	}
	if (check == 0)
		cout << -1 ;
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