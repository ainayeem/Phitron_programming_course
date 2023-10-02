#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float n;
        float ans;
        cin >> n;
        float profit = (20 * n) / 100;

        ans = ceil(100 / profit);
        cout << ans << endl;
    }

    return 0;
}