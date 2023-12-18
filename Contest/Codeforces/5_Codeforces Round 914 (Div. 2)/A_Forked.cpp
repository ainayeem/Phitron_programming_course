#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        vector<ll> dx = {-a, -a, a, a, b, b, -b, -b};
        vector<ll> dy = {-b, b, b, -b, a, -a, a, -a};

        set<pair<ll, ll>> indxK;
        set<pair<ll, ll>> indxQ;

        for (int i = 0; i < 8; i++)
        {
            indxK.insert({xk + dx[i], yk + dy[i]});
        }
        for (int i = 0; i < 8; i++)
        {
            indxQ.insert({xq + dx[i], yq + dy[i]});
        }

        int ans = 0;
        for (auto it : indxK)
        {
            if (indxQ.find(it) != indxQ.end())
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}