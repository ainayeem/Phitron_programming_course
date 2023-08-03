#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int l, r;
        cin >> l >> r;

        long long int sum = (abs(l - r) + 1) * (l + r) / 2;
        cout << sum << endl;
    }

    return 0;
}