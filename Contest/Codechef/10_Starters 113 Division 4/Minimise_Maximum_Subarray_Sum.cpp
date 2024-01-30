#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double x, y, a, b;
        cin >> x >> y;
        a = x - 2 * y;
        b = ceil(x / (y + 1));
        if (y <= x)
        {
            cout << max(a, b) << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}