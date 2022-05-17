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
	int n; cin >> n;
    int seven = n / 7;
    int four = n % 7;
    while (four % 4 != 0 && seven > 0 ) {
        four += 7;
        seven--;
    }
    if (four % 4 == 0) four /= 4;
    else {
        cout << -1;
        return;
    }
    while (four--) cout << 4;
    while (seven--) cout << 7;
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