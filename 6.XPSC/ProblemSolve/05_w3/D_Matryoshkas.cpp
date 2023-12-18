#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int a[n];
        map<long long int, long long int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a, a + n);
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            long long int val = a[i];
            if (mp[a[i]] != 0)
            {
                ans++;
                while (mp[val] > 0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }

        //
        // for (auto it = mp.begin(); it != mp.end(); it++)
        // {
        //     cout << it->first << " " << it->second << endl;
        //     ans = max(ans, it->second);
        // }
        cout << ans << endl;
    }

    return 0;
}