#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = 1e9;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        ll halfTree = 0;
        for (int i = 0; i < n; i++)
        {
            halfTree += max((ll)0, a[i] - mid);
        }
        if (halfTree < m)
        {
            r = mid - 1;
        }
        else
        {
            ans = max(ans, mid);
            l = mid + 1;
        }
    }
    cout << ans << endl;

    return 0;
}