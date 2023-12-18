#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<vector<int>> v(26, vector<int>(2));
        int ans = 0;

        for (auto i : s)
        {
            if (i >= 'a' && i <= 'z')
            {
                v[i - 'a'][0]++;
            }
            else
            {
                v[i - 'A'][1]++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            ans += min(v[i][0], v[i][1]);
            int xtra = min(k, abs(v[i][0] - v[i][1]) / 2);
            ans += xtra;
            k -= xtra;
        }
        cout << ans << endl;
    }

    return 0;
}