#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long val = 0;
        for (int i = 0; i < n; i++)
        {

            val = (val ^ a[i]);
        }
        // cout << val << endl;
        long long mnXr = val;

        for (int i = 0; i < n; i++)
        {
            long long ck = val ^ a[i];
            mnXr = min(mnXr, ck);
        }
        cout << mnXr << endl;
    }

    return 0;
}
