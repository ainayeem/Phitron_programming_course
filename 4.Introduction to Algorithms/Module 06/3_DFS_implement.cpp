/*
10
9
1 2
1 3
1 10
2 4
3 5
3 6
4 7
4 8
6 9
*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];

void dfs(int f)
{
    // section 1- after entering node f
    visited[f] = true;
    cout << "Visiting Node: " << f << endl;
    for (int l : adj[f])
    {
        // section 2- before entering a new neighbor
        if (visited[l] == true)
            continue;
        dfs(l);
        // section 3- after exiting a neighbor
    }
    // section 4- before exiting node f
}
int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int f, l;
        cin >> f >> l;
        adj[f].push_back(l);
        adj[l].push_back(f);
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "Node" << i << ": ";
    //     for (int j : adj[i])
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    dfs(1);

    return 0;
}