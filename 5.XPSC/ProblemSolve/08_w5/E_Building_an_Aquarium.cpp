// https://youtu.be/L2hR3g9XVVk
#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool check(ll h, vector<ll> v, ll x)
{
    ll watarH = 0;
    ll n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (h >= v[i])
        {
            watarH += h - v[i];
        }
        else
        {
            continue;
        }
    }
    if (watarH > x)
    {
        return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll l = 1;
        ll r = 2e9;
        ll ans = -1;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (check(mid, v, x))
            {
                ans = max(ans, mid);
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}