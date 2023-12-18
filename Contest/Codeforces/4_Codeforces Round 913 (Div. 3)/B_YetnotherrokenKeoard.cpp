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

        int a[s.size()] = {0};
        vector<int> sm, cp;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'B' && s[i] != 'b')
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    cp.push_back(i);
                }
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    sm.push_back(i);
                }
            }
            if (s[i] == 'B')
            {
                a[i] = -1;
                if (!cp.empty())
                {
                    a[cp.back()] = -1;
                    cp.pop_back();
                }
            }
            if (s[i] == 'b')
            {
                a[i] = -1;
                if (!sm.empty())
                {
                    a[sm.back()] = -1;
                    sm.pop_back();
                }
            }
        }
        // for (int i = 0; i < cp.size(); i++)
        // {
        //     cout << cp[i] << " ";
        // }
        for (int i = 0; i < s.size(); i++)
        {
            if (a[i] == 0)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}