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

        int in = 0, ans = 0, threeCnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.' && in == 1)
            {
                ans++;
                threeCnt++;
            }
            if (threeCnt >= 3)
            {
                ans = 2;
                break;
            }
            if (s[i] == '.' && in == 0)
            {
                in = 1;
                ans++;
                threeCnt++;
            }
            if (s[i] == '#' && in == 1)
            {
                threeCnt = 0;
                in = 0;
            }
        }
        cout << ans << endl;
    }

    return 0;
}