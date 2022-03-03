#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int n;
string s;
void show(string s)
{
    {
        for (int i = 0; i < n; i++)
        {
            cout << s[i] << " ";
        }
        cout << endl;
    }
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        s[i] = (j + 48);
        if (i == n-1)
        {
            show(s);
        }
        else
            Try(i + 1);
    }
}
void solve()
{
    string s;
    cin>>s;
    s="0"+s;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]=='0')
        {
            s[i]=1+48;
            for(int j=i+1;j<s.length();j++)
            {
                s[j]=0+48;
            }
            break;
        }
    }
    for(int i=1;i<s.length();i++) cout<<s[i];
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