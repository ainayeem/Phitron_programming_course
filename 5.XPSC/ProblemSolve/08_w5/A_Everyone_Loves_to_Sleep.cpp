#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, h, m;
        cin >> n >> h >> m;
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int hh, mm;
            cin >> hh >> mm;
            int ih = h, im = m;
            int cnt = 0;
            while (true)
            {
                if (ih == hh && im == mm)
                {
                    break;
                }
                cnt++;
                im++;
                if (im == 60)
                {
                    im = 0;
                    ih++;
                    if (ih == 24)
                    {
                        ih = 0;
                    }
                }
            }
            ans = min(ans, cnt);
        }
        cout << ans / 60 << " " << ans % 60 << endl;
    }

    return 0;
}