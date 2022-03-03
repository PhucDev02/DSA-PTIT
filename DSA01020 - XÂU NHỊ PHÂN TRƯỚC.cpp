#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
string s;
bool check()
{
	for (int i=0;i<s.length();i++)
	{
		if(s[i]=='1') return 0;
	}
	for(int  i=0;i<s.length();i++)
	{
		s[i]='1';
	}
	return 1;
}
void solve()
{
	cin >> s;
	int n = s.length();
	if(check()==1)
	{
		cout<<s;
		 return ;
	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (s[i] == '1')
		{
			s[i] = '0';
			for (int j = i; j < n; j++)
			{
				s[j + 1] = '1';
			}
			cout << s;
			return;
		}
	}
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