#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        int a[n], b[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]] = INT_MIN;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            mp[a[i]] = max(0, max(mp[a[i]], b[i]));
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            ans += it->second;
        }
        cout << ans << endl;
    }

    return 0;
}