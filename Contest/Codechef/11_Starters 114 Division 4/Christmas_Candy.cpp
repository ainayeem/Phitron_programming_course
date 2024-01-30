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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = 0;
        int mx = a[0];
        for (int i = 0; i < n; i++)
        {
            if (mx > a[i])
            {
                ans++;
            }
            else if (mx < a[i])
            {
                mx = a[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}