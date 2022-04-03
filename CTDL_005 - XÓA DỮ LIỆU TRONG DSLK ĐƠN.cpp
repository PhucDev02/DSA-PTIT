#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i;
    cin >> n ;
    int a[n];
    for (i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cin >> x;
    for (i=0;i<n;i++)
    {
        if (x!=a[i])
            cout<<a[i]<<" ";
    }
}