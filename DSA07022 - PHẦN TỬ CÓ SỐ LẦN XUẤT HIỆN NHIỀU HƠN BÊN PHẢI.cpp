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
void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	map<int, int> m;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		m[a[i]]++;
	}
	vector<int> r(n);
	stack<int> st;
	for (int i = n - 1; i >= 0; i--)
	{
		while (st.size() && m[st.top()] <= m[a[i]])
		{
			st.pop();
		}
		if (st.size())
			r[i] = st.top();
		else
			r[i] = -1;
		st.push(a[i]);
	}
	for (int i = 0; i < n; i++)
		cout << r[i] << " ";
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
}