#include <bits/stdc++.h>
#define ll long long
using namespace std;
void getPrime(ll val, map<ll, ll> &mp)
{
    for (int i = 2; i <= sqrt(val); i++)
    {
        while (val % i == 0)
        {
            mp[i]++;
            val /= i;
        }
    }
    if (val > 1)
    {
        mp[val]++;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int val;
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            getPrime(val, mp);
        }
        int flag = 1;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            // cout << it->first << " " << it->second << endl;
            if (it->second % n != 0)
            {
                flag = 0;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}