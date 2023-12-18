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
        ll a[n];
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        vector<int> pv;
        for (int i = 0; i < (1 << 15); i++)
        {
            string s = to_string(i);
            string revSt = s;
            reverse(revSt.begin(), revSt.end());
            if (s == revSt)
            {
                pv.push_back(i);
            }
        }
        // for (int i = 0; i < pv.size(); i++)
        // {
        //     cout << pv[i] << endl;
        // }

        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < pv.size(); j++)
            {
                int xr = a[i] ^ pv[j];
                if (xr > a[i])
                {
                    count += mp[xr];
                }
            }
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            count += ((long long)it->second * (it->second + 1)) / 2;
        }

        cout << count << endl;
    }

    return 0;
}