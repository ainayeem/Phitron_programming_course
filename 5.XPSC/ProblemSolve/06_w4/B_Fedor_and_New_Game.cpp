#include <bits/stdc++.h>
using namespace std;
int countOne(int val)
{
    int res = 0;
    while (val > 0)
    {
        res++;
        val = val & (val - 1); // last digit 0 kore
    }
    return res;
}
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[m + 1];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    int val;
    cin >> val;
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int xval = a[i] ^ val;
        // cout << xval << endl;
        int tone = countOne(xval);
        if (tone <= k)
            ans++;
    }
    cout << ans << endl;

    return 0;
}
// 1101111-111
// 0010001-17
// 1111110-6