#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n == x || x == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int unrate = (2 * n) - x; // 2
            cout << max(0, x - unrate) << endl;
        }
    }

    return 0;
}