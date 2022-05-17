#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <map>
#include <sstream>
#define ll long long
using namespace std;
vector<int> v;
map<int, int> m;
void Try(int n)
{
	v.push_back(n);
	for (int i = 0; i <= 5; i++)
	{
		if (m[i] == 0)
		{
			m[i] = 1;
			Try(n * 10 + i);
			m[i] = 0;
		}
	}
}
void presolve()
{
	for (int i = 1; i <= 5; i++)
	{
		// if(m[i]==0)
		{
			m[i] = 1;
			Try(i);
			m[i] = 0;
		}
	}
}
void solve()
{
	int l, r;
	cin >> l >> r;
	int x = lower_bound(v.begin(), v.end(), l) - v.begin();
	int y = lower_bound(v.begin(), v.end(), r) - v.begin();
	if (v[y] != r)
		y--;
	cout << y - x + 1;
}
int main()
{
	int t = 1;
	cin >> t;
	presolve();
	sort(v.begin(), v.end());
	while (t--)
	{
		solve();
		cout << endl;
	}
}