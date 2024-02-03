#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string in = "";
        in += s[i];
        in += s[i + 1];
        // cout << in << endl;
        // cout << s[i] << s[i + 1] << endl;
        mp[in]++;
    }
    string ans = "";
    int v = INT_MIN;
    bool flag = false;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > 1)
        {
            flag = true;
        }
        if (it->second >= v)
        {
            v = it->second;
            ans = it->first;
        }
        // cout << it->first << " " << it->second << endl;
    }
    //
    if (!flag)
    {
        cout << s[0] << s[1] << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}