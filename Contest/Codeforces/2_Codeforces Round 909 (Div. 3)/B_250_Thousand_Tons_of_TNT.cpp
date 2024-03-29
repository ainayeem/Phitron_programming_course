#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long arr[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n < 2)
        {
            cout << 0 << endl;
        }
        else
        {
            long long i = 1;
            long long ans = INT_MIN;
            while (i < n)
            {
                if (n % i == 0)
                {
                    long long sum = 0, mx = LLONG_MIN, mn = LLONG_MAX;
                    for (long long j = 1; j <= n; j++)
                    {
                        sum += arr[j - 1];
                        if (j % i == 0)
                        {
                            mx = max(mx, sum);
                            mn = min(mn, sum);
                            sum = 0;
                        }
                    }
                    ans = max(ans, abs(mx - mn));
                }
                i++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}