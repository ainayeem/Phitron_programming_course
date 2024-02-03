#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        int a[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if ((a[i] & b) == b)
            {
                v.push_back(a[i]);
            }
        }
        int ans = -1;
        for (int i = 0; i < v.size(); i++)
        {
            if (ans == -1)
            {
                ans = v[i];
            }
            else
            {
                ans &= v[i];
            }
            // cout << v[i] << endl;
        }
        // cout << ans << endl;
        cout << (ans == b ? "YES" : "NO") << endl;
    }

    return 0;
}