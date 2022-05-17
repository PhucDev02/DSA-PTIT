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
vector<vector<char> > a(110,vector<char> (110,'.'));
void xuli(int m,int n)
{
	a[m][n]='.';
	if(a[m-1][n]=='W') xuli(m-1,n);
	if(a[m-1][n-1]=='W') xuli(m-1,n-1);
	if(a[m-1][n+1]=='W') xuli(m-1,n+1);
	if(a[m+1][n]=='W') xuli(m+1,n);
	if(a[m+1][n+1]=='W') xuli(m+1,n+1);
	if(a[m][n+1]=='W') xuli(m,n+1);
	if(a[m][n-1]=='W') xuli(m,n-1);
	if(a[m+1][n-1]=='W') xuli(m+1,n-1);
	
}
void solve()
{
    int m,n; cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	int dem=0;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]=='W')
			{
				xuli(i,j);
				dem++;
			}
		}
	}
	cout<<dem;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}