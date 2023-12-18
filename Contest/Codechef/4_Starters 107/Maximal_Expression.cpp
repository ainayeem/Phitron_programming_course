

#include <bits/stdc++.h>
using namespace std;
int calx(int n, int k)
{
    long long int mX = 0, mR = -1;
    for (int i = 0; i <= n; i++)
    {
        long long int res = (i % k) * ((n - i) % k);
        // cout << res << endl;

        if (res > mR)
        {
            mR = res;
            mX = i;
        }
    }
    return mX;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        int r1 = n % k;
        int r2 = (n / k) * k;
        int res;
        if (r1 > r2)
        {
            res = calx(n - r2, k);
        }
        else
        {
            res = calx(n - r1, k);
        }

        cout << res << "\n";
    }

    return 0;
}