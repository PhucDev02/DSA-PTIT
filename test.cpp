
#include <iostream>
#define MAX 100
using namespace std;
struct edge
{
    int dau, cuoi, c;
};
class graph
{
    int n, s, C[MAX][MAX], chuaxet[MAX], dH, ne, neT, T[MAX][MAX];
    edge G[MAX], Tree[MAX];

public:
    void readdata()
    {
        cin >> n >> s;
        ne = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                cin >> C[i][j];
                if ((C[i][j] != 0) && (i < j))
                {
                    ne++;
                    G[ne].dau = i;
                    G[ne].cuoi = j;
                    G[ne].c = C[i][j];
                }
            }
    }
    void init()
    {
        for (int i = 1; i <= n; i++)
            chuaxet[i] = 1;
    }
    void dfstree(int u)
    {
        chuaxet[u] = 0;
        for (int v = 1; v <= n; v++)
            if ((T[u][v] == 1) && (chuaxet[v] == 1))
                dfstree(v);
    }
    int gets() 
    { 
        return s; 
    }
    void sort()
    {
        for (int i = ne; i >= 1; i--)
            for (int j = 1; j < i; j++)
                if (G[j].c > G[j + 1].c)
                {
                    edge tmp = G[j + 1];
                    G[j + 1] = G[j];
                    G[j] = tmp;
                }
    }
    void prim(int s)
    {
        neT = 0;
        dH = 0;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                T[i][j] = 0; // cay rong
        // Sap xep
        sort();
        // Lap
        for (int eT = 1; eT <= n - 1; eT++)
        {
            init();
            dfstree(s);
            int found = 0;
            for (int e = 1; e <= ne; e++)
            {
                if (chuaxet[G[e].dau] + chuaxet[G[e].cuoi] == 1)
                {
                    neT++;
                    found = 1;
                    Tree[neT].dau = G[e].dau;
                    Tree[neT].cuoi = G[e].cuoi;
                    Tree[neT].c = G[e].c;
                    T[G[e].dau][G[e].cuoi] = T[G[e].cuoi][G[e].dau] = 1;
                    dH += G[e].c;
                    break; // lay 1 canh
                }
            }
            if (found == 0)
                break; // ket thuc, do thi khong lien thong
        }
        // In ket qua
        if (neT != n - 1)
            cout << "Do thi khong lien thong\n";
        else
        {
            cout << "dH = " << dH << endl;
            for (int eT = 1; eT <= n - 1; eT++)
                cout << Tree[eT].dau << " " << Tree[eT].cuoi << endl;
        }
    }
};
int main()
{
    graph g;
    g.readdata();
    g.prim(g.gets());
}