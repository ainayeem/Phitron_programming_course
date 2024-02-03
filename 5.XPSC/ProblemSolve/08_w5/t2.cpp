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
    int q;
    cin >> q;
    while (q--)
    {
        int v;
        cin >> v;

        int l = 0, r = n - 1;
        auto x = lower_bound(a, a + n, v) - a;
        auto y = upper_bound(a, a + n, v) - a;

        if ((a[x] == v && x > 0) || x > 0)
        {
            cout << a[x - 1] << " ";
        }
        else
        {
            cout << "X ";
        }
        if (y != n)
        {
            cout << a[y] << endl;
        }
        else
        {
            cout << "X" << endl;
        }
    }

    return 0;
}