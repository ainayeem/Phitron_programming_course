#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    int adjmat[n][n] = {0};

    for (int i = 0; i < e; i++)
    {
        int f, l, v;
        cin >> f >> l >> v;
        // directed
        adjmat[f - 1][l - 1] = v;
        // undirected
        // adjmat[l-1][f-1] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adjmat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}