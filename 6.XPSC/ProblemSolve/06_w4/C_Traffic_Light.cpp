#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char k;
        string val;
        cin >> n >> k;
        cin >> val;
        if (k == 'g')
        {
            cout << 0 << endl;
            continue;
        }

        int frstG = -1;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (val[i] == 'g')
            {
                frstG = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (val[i] == k)
            {
                int cnt = 0, flag = 0;
                for (int j = i + 1; j < n; j++)
                {
                    cnt++;
                    if (val[j] == 'g')
                    {
                        flag++;
                        break;
                    }
                }
                i = i + cnt;
                if (flag)
                {
                    ans = max(ans, cnt);
                }
                else
                {
                    ans = max(ans, (cnt + 1 + frstG));
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}