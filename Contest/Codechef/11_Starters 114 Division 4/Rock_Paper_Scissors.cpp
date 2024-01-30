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
        string ans = "";
        int minWin = (n / 2) + 1;
        vector<char> v(n, 'P');
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'R')
            {
                cnt++;
            }
        }
        if (cnt <= minWin)
        {
            int tmp;
            tmp = minWin - cnt;
            for (int i = n - 1; i >= 0; i--)
            {
                if (tmp > 0)
                {

                    if (s[i] == 'S')
                    {
                        v[i] = 'R';
                        tmp--;
                    }
                    else if (s[i] == 'P')
                    {
                        v[i] = 'S';
                        tmp--;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            ans += v[i];
        }

        cout << ans << endl;
    }

    return 0;
}