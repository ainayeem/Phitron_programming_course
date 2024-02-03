#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, h;
        cin >> n >> h;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll l = 0, r = 1e5, ans = LLONG_MAX;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            ll remH = h;
            for (int i = 0; i < n; i++)
            {
                if (a[i] > mid)
                {
                    remH -= a[i];
                }
            }
            if (remH > 0)
            {
                r = mid - 1;
                ans = min(ans, mid);
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}