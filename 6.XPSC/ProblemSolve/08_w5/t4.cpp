// similar agrasiv cow
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0, r = INT_MAX, ans;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            int sum = 0, container = 1;

            for (int i = 0; i < n; i++)
            {
                if (a[i] > mid)
                {
                    container = INT_MAX;
                    break;
                }
                sum += a[i];
                if (sum > mid)
                {
                    container++;
                    sum = a[i];
                }
            }
            if (container <= m)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}