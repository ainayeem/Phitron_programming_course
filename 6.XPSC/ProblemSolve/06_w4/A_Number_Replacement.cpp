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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;
        int flag = 1;
        map<int, set<char>> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]].insert(s[i]);
        }
        for (auto it : mp)
        {
            if (it.second.size() > 1)
            {
                flag = 0;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}