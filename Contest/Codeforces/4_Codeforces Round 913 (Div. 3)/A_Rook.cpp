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
        int v = s[1] - '0';
        char w = s[0];
        // cout << v << endl;
        for (int i = 1; i <= 8; i++)
        {
            if (i == v)
            {
                continue;
            }
            else
            {
                cout << w << i << endl;
            }
        }

        for (char i = 'a'; i <= 'h'; i++)
        {
            if (i == w)
            {
                continue;
            }
            else
            {
                cout << i << s[1] << endl;
            }
        }
    }

    return 0;
}