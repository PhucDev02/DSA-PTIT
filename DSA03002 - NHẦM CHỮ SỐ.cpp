#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
//vector<int> dem(1000000,0);
long long rev(long long a)
{
	long long b=0;
	while(a>0)
	{
		b=b*10+a%10;
		a/=10;
	}
	return b;
}
int main()
{
	long long a,b; cin>>a>>b;
	long long m=0,n=0;
	int checka=0,checkb=0;
	if(a%10==0)
	{
		checka=1;
	}
	if(b%10==0)
	{
		checkb=1;
	}
	while(a>0)
	{
		int tam=a%10;
		if(tam==6)
		{
			tam=5;
		}
		m=m*10+tam;
		a/=10;
	}
	m=rev(m);
	if(checka==1)
	{
		m*=10;
	}
	while(b>0)
	{
		int tam=b%10;
		if(tam==6)
		{
			tam=5;
		}
		n=n*10+tam;
		b/=10;
	}
	n=rev(n);
	if(checkb==1)
	{
		n*=10;
	}
	cout<<m+n;
	//min
	while(m>0)
	{
		int tam=m%10;
		if(tam==5)
		{
			tam=6;
		}
		a=a*10+tam;
		m/=10;
	}
	a=rev(a);
	if(checka==1)
	{
		a*=10;
	}
	while(n>0)
	{
		int tam=n%10;
		if(tam==5)
		{
			tam=6;
		}
		b=b*10+tam;
		n/=10;
	}
	b=rev(b);
	if(checkb==1)
	{
		b*=10;
	}
	cout<<" "<<a+b;
	return 0;
}