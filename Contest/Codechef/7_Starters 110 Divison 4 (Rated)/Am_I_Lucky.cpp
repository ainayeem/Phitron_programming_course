#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, k;
        cin >> n >> x >> k;

        ll g = n - x;
        ll readB = x - ((x / k) * k);
        ll readG = g - ((g / k) * k);
        cout << max(readB, readG) - min(readB, readG) << endl;
    }

    return 0;
}