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
        long long int ans = 0;
        map<string, int> m;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            for (int j = 0; j < 2; j++)
            {
                for (char c = 'a'; c <= 'k'; c++)
                {
                    if (s[j] == c)
                    {
                        continue;
                    }
                    string temp = s;
                    temp[j] = c;
                    ans += m[temp];
                }
            }
            m[s]++;
        }
        // for (auto it = m.begin(); it != m.end(); it++)
        // {
        //     if (it->second == 1)
        //     {

        //         cout << it->first << " " << it->second << endl;
        //     }
        // }
        cout << ans << endl;
    }

    return 0;
}