#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
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
            ans = (ans ^ a[i]);
            // cout << a[i] << " " << ans << endl;
        }
        if (n % 2 == 0 && ans != 0)
        {
            cout << -1 << endl;
        }
        else
            cout << ans << endl;
    }

    return 0;
}