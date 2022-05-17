#include <bits/stdc++.h>
using namespace std;
int conv(char x)
{
    return x - 'a' + 1;
}
class data
{
public:
    int x, y;
    int dem;
    data();
    data(int x, int y, int dem)
    {
        this->x = x;
        this->y = y;
        this->dem = dem;
    }
};

pair<int, int> d[8] = {{-2, -1}, {-2, 1}, {-1,-2,},{-1, 2},{1, -2},{1, 2},{2, -1},{2, 1}};
void bfs(data st, data en)
{
    bool check[10][10] = {};
    check[st.x][st.y] = 1;
    queue<data> q;
    q.push(st);
    while (q.size())
    {
        data tmp = q.front();
        q.pop();
        if (tmp.x == en.x && tmp.y == en.y)
        {
            cout << tmp.dem;
            return;
        }
        for (int i = 0; i < 8; i++)
        {
            int xx = tmp.x + d[i].first;
            int yy = tmp.y + d[i].second;
            if ((xx >= 1 && xx <= 8) && (yy >= 1 && yy <= 8) && check[xx][yy] == 0)
            {
                q.push(data(xx, yy, tmp.dem + 1));
                check[xx][yy] = 1;
            }
        }
    }
}
void solve()
{
    char s, e;
    int a, b;
    cin >> s >> a >> e >> b;
    data st = data(conv(s), a, 0);
    data en = data(conv(e), b, 0);
    bfs(st, en);
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