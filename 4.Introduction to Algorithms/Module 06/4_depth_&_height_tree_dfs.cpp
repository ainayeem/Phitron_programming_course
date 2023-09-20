/*
12
11
1 2
1 3
1 10
2 4
2 5
3 9
5 6
5 7
6 8
10 11
10 12

*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
int depth[N];
int height[N];

void dfs(int f)
{
    // section 1- after entering node f
    visited[f] = true;

    for (int l : adj[f])
    {
        // section 2- before entering a new neighbor
        if (visited[l] == true)
            continue;
        depth[l] = depth[f] + 1;
        dfs(l);
        // determine the height of f
        // if (height[l] + 1 > height[f])
        // {
        //     height[f] = height[l] + 1;
        // }
        // similar for loop
        height[f] = max(height[f], height[l] + 1);
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

    dfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "Depth of Node " << i << ": " << depth[i] << endl;
    }
    cout << endl
         << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "Height of Node " << i << ": " << height[i] << endl;
    }
    return 0;
}