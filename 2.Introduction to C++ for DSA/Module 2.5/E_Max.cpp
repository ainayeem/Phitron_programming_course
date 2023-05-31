#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, mx = INT_MIN;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, ar[i]);
    }

    cout << mx;

    return 0;
}