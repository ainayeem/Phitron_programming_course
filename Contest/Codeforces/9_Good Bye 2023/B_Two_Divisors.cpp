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
        ll a, b;
        cin >> a >> b;
        ll ans = a * b / __gcd(a, b); // 6/1

        if (b % a == 0)
        {
            ans = b * (b / a);
        }
        cout << ans << endl;
    }

    return 0;
}