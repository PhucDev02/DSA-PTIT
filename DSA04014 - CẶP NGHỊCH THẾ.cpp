#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <stack>
#include <queue>
#include <set>
using namespace std;
long long tron(long long a[], int l, int m, int r)
{
    int i = 0, j = 0, k = l, n1 = m - l + 1, n2 = r - m;
    long long L[n1], R[n2];
    long long kq = 0;
    for (int i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (int i = 0; i < n2; i++)
        R[i] = a[m + i + 1];
    i = 0;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k++] = L[i++];
        }
        else
        {
            a[k++] = R[j++];
            kq = kq + (n1 - i);
        }
    }
    while (i < n1)
        a[k++] = L[i++];
    while (j < n2)
        a[k++] = R[j++];
    return kq;
}
long long tinh(long long a[], int l, int r)
{
    long long kq = 0;
    if (l < r)
    {
        int m = (l + r) / 2;
        kq = kq + tinh(a, l, m);
        kq = kq + tinh(a, m + 1, r);
        kq = kq + tron(a, l, m, r);
    }
    return kq;
}
void solve()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << tinh(a, 0, n-1);
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