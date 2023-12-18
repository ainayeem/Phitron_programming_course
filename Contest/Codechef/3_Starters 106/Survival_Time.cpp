#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, d, stock = 0, ans = 0;
        cin >> n >> x >> d; // 120 5 15
        int need = 5 * x;   // 25

        stock = n / need; // 4
        ans = stock + d;

        cout << ans << endl;
    }

    return 0;
}