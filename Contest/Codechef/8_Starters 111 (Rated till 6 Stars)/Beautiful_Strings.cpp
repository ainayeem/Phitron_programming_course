#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll MOD = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int freq[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'a']++;
        }
        ll ans = 1;
        for (int i = 0; i < 26; i++)
        {
            // freq[s[i] - 'a']++;
            // cout << (char)(i + 'a') << " " << freq[i] << endl;
            if (freq[i] != 0)
            {
                ans *= (freq[i] + 1);
                ans %= MOD;
            }
        }
        cout << (ans - 1) % MOD << endl;
    }

    return 0;
}