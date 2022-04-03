#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <set>
using namespace std;
void solve()
{
    int n;
	cin >> n;
	long long a[n], s = 0, mod = 1e9 + 7;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	for (int i = 0; i < n; i++)
		s = (s + a[i] * i) % mod;
	cout << s ;
}
int main()
{
	int t=1;
	cin >> t;
	while (t--)
	{
		solve();
		cout<<endl;
	}
}