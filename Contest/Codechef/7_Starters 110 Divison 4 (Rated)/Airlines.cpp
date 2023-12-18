#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        int need = 0;
        if (n % 100 == 0)
        {
            need = n / 100;
        }
        else
        {
            need = n / 100 + 1;
        }
        int ans = need - x;
        // cout << need - x << endl;
        if (need > x)
        {
            cout << ans << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}