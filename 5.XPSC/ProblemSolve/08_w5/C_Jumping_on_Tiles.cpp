#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        vector<ll> ans;
        vector<ll> indx[26];
        ll m = 0;
        ll n = s.size();

        ll cost = abs(s[0] - s[n - 1]);
        // cout << cost << endl;
        for (int i = 0; i < n; i++)
        {
            indx[s[i] - 97].push_back(i + 1);
        }
        //
        // for (int i = 0; i < 26; i++)
        // {
        //     cout << "Index " << char('a' + i) << ": ";
        //     for (int j = 0; j < indx[i].size(); j++)
        //     {
        //         cout << indx[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        if (s[0] < s[n - 1])
        {
            for (int i = s[0] - 97; i <= s[n - 1] - 97; i++)
            {
                int l = indx[i].size();
                m = m + l;
                for (int j = 0; j < l; j++)
                {
                    ans.push_back(indx[i][j]);
                }
            }
        }
        else
        {
            for (int i = s[0] - 97; i >= s[n - 1] - 97; i--)
            {
                int l = indx[i].size();
                m = m + l;
                for (int j = 0; j < l; j++)
                {
                    ans.push_back(indx[i][j]);
                }
            }
        }
        cout << cost << " " << m << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}