#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <math.h>
#include <string.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int best = -999999;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            best = max(best, sum);
        }
    }
    cout << best;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}
//kadane
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <stack>
// #include <math.h>
// #include <string.h>
// using namespace std;
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     int best = -999999;
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = max(a[i], sum + a[i]);
//         best = max(sum, best);
//     }
//     cout << best;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout << endl;
//     }
// }