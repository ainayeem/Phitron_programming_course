#include <bits/stdc++.h>
using namespace std;
const long long int INF = 10e17;

int main()
{
    int n, e;
    cin >> n >> e;
    long long int dis[n + 1][n + 1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dis[i][j] = INF;
            if (i == j)
                dis[i][j] = 0;
        }
    }

    while (e--)
    {
        long long int a, b, w;
        cin >> a >> b >> w;
        if (dis[a][b] != INF)
        {
            if (dis[a][b] > w)
            {
                dis[a][b] = w;
            }
        }
        else
        {
            dis[a][b] = w;
        }
        // cout << dis[1][2] << endl;
        // dis[a][b] = w;
        // dis[b][a] = w;
        }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dis[i][k] + dis[k][j] < dis[i][j])
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }

    // cout << "Updated" << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (dis[i][j] == INF)
    //             cout << "INF"
    //                  << " ";
    //         else
    //             cout << dis[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;

        if (dis[x][y] == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dis[x][y] << endl;
        }
    }

    return 0;
}
