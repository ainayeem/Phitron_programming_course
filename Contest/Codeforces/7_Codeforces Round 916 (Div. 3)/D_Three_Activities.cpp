#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define sz(yo) (ll) yo.size()

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a, b, c;

    for (ll i = 0; i < n; i++)
    {
        ll in;
        cin >> in;
        a.push_back({in, i});
    }

    for (ll i = 0; i < n; i++)
    {
        ll in;
        cin >> in;
        b.push_back({in, i});
    }

    for (ll i = 0; i < n; i++)
    {
        ll in;
        cin >> in;
        c.push_back({in, i});
    }

    sort(a.begin(), a.end(), greater<pair<ll, ll>>());
    sort(b.begin(), b.end(), greater<pair<ll, ll>>());
    sort(c.begin(), c.end(), greater<pair<ll, ll>>());

    ll ans = 0;
    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            for (ll k = 0; k < 3; k++)
            {
                if ((a[i].second != b[j].second) && (a[i].second != c[k].second) && (b[j].second != c[k].second))
                {
                    ll sum = (a[i].first + b[j].first + c[k].first);
                    ans = max(sum, ans);
                }
            }
        }
    }

    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    t = 1;
    cin >> t;

    for (ll cs = 1; cs <= t; cs++)
    {
        // cout << "Case #" << cs << ": ";
        solve();
    }
    return 0;
}