#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
// vector<pair<int, int>> adj[N];
int main()
{
    int n, e;
    cin >> n >> e;

    // vector<int> adj[n];
    // wighted
    vector<pair<int, int>> adj[N];

    for (int i = 0; i < e; i++)
    {
        int f, l, v;
        cin >> f >> l >> v;
        // directed
        // adj[f - 1].push_back(l - 1);
        adj[f].push_back({l, v});
        // adj[f - 1].push_back(make_pair((l - 1), v));

        // undirected
        // adj[l-1].push_back(f-1);
    }
    // For unweighted
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "List" << i + 1 << ": ";
    //     for (int j : adj[i])
    //     {
    //         cout << j + 1 << " ";
    //     }
    //     cout << endl;
    // }
    for (int i = 1; i <= n; i++)
    {
        cout << "List" << i << ": ";
        for (auto j : adj[i])
        {
            cout << "(" << j.first;
            cout << ", " << j.second << "), ";
        }
        cout << endl;
    }

    return 0;
}
/*
4
5
1 2 8
1 3 9
2 4 11
4 3 17
3 2 15
*/