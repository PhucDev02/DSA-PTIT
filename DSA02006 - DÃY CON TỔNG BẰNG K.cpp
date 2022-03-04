#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
int n, k;
vector<int> a(50), b(50);
stack<vector<int>> st;
void show()
{
    vector<int> tmp;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 1)
        {
            tmp.push_back(a[i]);
        }
    }
    st.push(tmp);
}
void Try(int i, int sum)
{
    if (sum > k)
        return;
    for (int j = 0; j <= 1; j++)
    {
        b[i] = j;
        sum += a[i] * j;
        if (i == n - 1)
        {
            if (sum == k)
                show();
        }
        else
        {
            Try(i + 1, sum);
        }
    }
}
void solve()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.begin() + n);
    Try(0, 0);
    if (st.size() == 0)
        cout << -1;
    else
        while (st.size() > 0)
        {
            vector<int> tmp = st.top();
            cout << "[";
            for (int i = 0; i < tmp.size() - 1; i++)
            {
                cout << tmp[i] << " ";
            }
            cout << tmp[tmp.size() - 1] << "] ";
            st.pop();
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