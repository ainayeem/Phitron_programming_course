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
        string s;
        cin >> s;
        int ans = 0;
        map<char, int> mp;
        for (auto c : s)
        {
            mp[c]++;
        }

        for (auto [x, y] : mp)
        {
            if (x - 'A' + 1 <= y)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}