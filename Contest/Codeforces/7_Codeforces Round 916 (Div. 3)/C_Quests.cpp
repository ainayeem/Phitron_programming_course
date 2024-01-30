#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        int sum = 0; // 10
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int tmp = 0, mxb = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == k)
            {
                break;
            }
            tmp += a[i];
            mxb = max(mxb, b[i]);
            ans = max(ans, tmp + (k - i - 1) * mxb);
        }
        cout << ans << endl;
    }

    return 0;
}