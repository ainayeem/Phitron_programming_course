#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> s(n);
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            mp.insert({s[i], 1});
        }
        int ans[n] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < s[i].size(); j++)
            {
                string s1 = s[i].substr(0, j);
                string s2 = s[i].substr(j, s[i].size() - j);
                // cout << s1 << "==" << s2 << endl;
                if (mp.find(s1) != mp.end() && mp.find(s2) != mp.end())
                {
                    ans[i] = 1;
                    break;
                }
            }
            // cout << endl;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i];
        }
        cout << endl;
    }

    return 0;
}
