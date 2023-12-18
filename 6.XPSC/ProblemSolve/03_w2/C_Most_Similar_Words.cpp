// https: // codeforces.com/problemset/problem/1676/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            // cout << v[i] << endl;
            string s1 = v[i];
            for (int j = i + 1; j < n; j++)
            {
                string s2 = v[j];
                int sum = 0;
                for (int k = 0; k < m; k++)
                {
                    // cout << s1[k] << " " << s2[k] << endl;
                    sum += abs(s1[k] - s2[k]);
                }
                // cout << sum << endl;
                ans = min(sum, ans);
            }
        }
        cout << ans << endl;
    }

    return 0;
}