#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3, mn = INT_MAX, mx = INT_MIN;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (int i = 0; i < n; i++)
    {
        mn = min(mn, ar[i]);
        mx = max(mx, ar[i]);
    }

    cout << mn << " " << mx;

    return 0;
}