#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, s;
        cin >> m >> s;
        int mx = 0; // 4
        int giveSum = 0;
        for (int i = 0; i < m; i++)
        {
            int tmp;
            cin >> tmp;
            mx = max(mx, tmp);
            giveSum += tmp;
        }
        int ttl = giveSum + s;
        // cout << ttl;
        int flag = 0;
        for (int i = 1; i <= 100; i++)
        {
            if (i * (i + 1) / 2 == ttl)
            {
                if (i >= mx)
                {
                    flag = 1;
                }
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}