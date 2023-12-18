// fixed subarray hole sliding window
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (abs(a[i] - a[j]) <= min(a[i], a[j]))
            {
                // cout << a[i] << " " << a[j] << " ";
                int s = a[i] ^ a[j];
                ans = max(ans, s);
            }
        }
        cout << endl;
    }
    cout << ans << endl;

    return 0;
}