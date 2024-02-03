#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<ll>());
        ll count = 1;
        ll fval = a[0];
        for (int i = 1; i < n; i++)
        {
            if (fval >= a[i])
            {
                fval ^= a[i];
            }
            else
            {
                fval = a[i];
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}