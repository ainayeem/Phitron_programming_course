#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0, zc = 0, oc = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                zc++;
            }
            else
            {
                oc++;
            }
        }
        if (zc > oc)
        {
            cout << oc << endl;
        }
        else
        {
            cout << zc << endl;
        }
        // cout << ans << endl;
    }

    return 0;
}