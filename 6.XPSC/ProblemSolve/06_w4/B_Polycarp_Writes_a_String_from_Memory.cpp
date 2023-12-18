#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        set<char> stSet;
        int ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            // cout << s[i] << " ";
            stSet.insert(s[i]);
            if (stSet.size() == 4)
            {
                stSet.clear();
                stSet.insert(s[i]);
                ans++;
            }
        }
        cout << ans + 1 << endl;
    }

    return 0;
}