#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll sumOfDigit(ll n)
{
    ll sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    ll n, k;
    cin >> n >> k; // 12 1

    ll l = 1, r = n;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;       // 6
        if (mid - sumOfDigit(mid) >= k) // 6-3=3>1
        {
            ans = n - mid + 1; // 7
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}