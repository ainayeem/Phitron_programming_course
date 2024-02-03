#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long long a[n][m];
        for (int r = 0; r < n; r++)
        {
            for (int c = 0; c < m; c++)
            {
                cin >> a[r][c];
            }
        }
        long long ans = 0;
        for (int r = 0; r < n; r++)
        {
            for (int c = 0; c < m; c++)
            {
                long long sum = 0;
                // up left (-1, -1)
                for (int i = 1; r - i >= 0 and c - i >= 0; i++)
                {
                    sum += a[r - i][c - i];
                }
                // down right (+1, +1)
                for (int i = 1; r + i < n and c + i < m; i++)
                {
                    sum += a[r + i][c + i];
                }
                // down left (+1, -1)
                for (int i = 1; r + i < n and c - i >= 0; i++)
                {
                    sum += a[r + i][c - i];
                }
                // up right (-1, +1)
                for (int i = 1; r - i >= 0 and c + i < m; i++)
                {
                    sum += a[r - i][c + i];
                }
                sum += a[r][c];
                ans = max(ans, sum);
            }
        }
        cout << ans << endl;
    }

    return 0;
}