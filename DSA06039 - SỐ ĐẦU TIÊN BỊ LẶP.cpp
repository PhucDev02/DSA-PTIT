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
	vector<int> a(n+1);
	pair<int, int> k;
	k.second = 1e9;
	map<int, int> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (m[a[i]] == 0)//chuwa xuat hien
			m[a[i]] = i; //luu vi tri dau tien
		else if (k.second > m[a[i]]) //neu xuat hien roi va vi tri xuat hien nho hon
		{
			k.first = a[i];
			k.second = m[a[i]];
		}
	}
	if (k.second != 1e9)
		cout << k.first << endl;
	else
		cout << "NO" << endl;
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