#include <bits/stdc++.h>
using namespace std;
int V, E, u;
void solve()
{
	cin >> V >> E;
	vector<pair<int, int>> ds(V+2);
	for (int i = 1; i <= E; i++)
	{
		int a, b;
		cin >> a >> b;
		ds[a].first++;
		ds[b].second++;
	}
	for (int i = 1; i <= V; ++i) {
        if (ds[i].first != ds[i].second) {
            cout << 0;
            return;
        }
    }
    cout << 1;
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