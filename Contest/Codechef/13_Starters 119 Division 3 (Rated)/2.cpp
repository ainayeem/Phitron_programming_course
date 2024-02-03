#include <bits/stdc++.h>
#define ll long long
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, child;
        cin >> n >> child;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = INT_MAX;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= child)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] >= child)
                {
                    int c = a[i] % child;
                    ans = min(ans, c);
                }
            }
        }
        if (flag)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}