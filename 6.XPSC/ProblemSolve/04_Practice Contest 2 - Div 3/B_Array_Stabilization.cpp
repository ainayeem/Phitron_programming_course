// https: // codeforces.com/problemset/problem/1095/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 2)
    {
        cout << '0' << endl;
    }
    else
    {
        sort(a, a + n);
        int ans = min(a[n - 2] - a[0], a[n - 1] - a[1]);
        cout << ans << endl;
    }

    return 0;
}