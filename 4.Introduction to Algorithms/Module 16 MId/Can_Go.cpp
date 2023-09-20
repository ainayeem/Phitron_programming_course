#include <bits/stdc++.h>
#define pr pair<int, int>
using namespace std;

const int N = 1e5 + 5;
vector<pair<int, int>> v[N];
int dis[N];
bool vis[N];

void dijkstra(int src)
{
    priority_queue<pr, vector<pr>, greater<pr>> pq;

    pq.push({0, src});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();
        int parentNode = parent.second;
        if (vis[parentNode])
        {
            continue;
        }
        vis[parentNode] = true;
        int parentCost = parent.first;
        int s = v[parentNode].size();
        // cout << s << endl;
        for (int i = 0; i < v[parentNode].size(); i++)
        {
            pair<int, int> child = v[parentNode][i];
            int childNode = child.first;
            // cout << childNode << endl;
            int childCost = child.second;
            // cout << childCost << endl;
            if (parentCost + childCost < dis[childNode])
            {
                dis[childNode] = parentCost + childCost;
                pq.push({dis[childNode], childNode});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }

    int src;
    cin >> src;
    dijkstra(src);

    int t;
    cin >> t;
    while (t--)
    {
        int d, dw;
        cin >> d >> dw;
        if (dis[d] <= dw)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}