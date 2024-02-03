#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            while (a[i] % 2 == 0)
            {
                count++;
                a[i] /= 2;
            }
        }
        vector<long long> c;
        for (int i = 2; i <= n; i++)
        {
            int j = i, k = 0;
            while (j % 2 == 0)
            {
                k++;
                j /= 2;
            }
            if (k > 0)
            {
                c.push_back(k);
            }
        }
        int ans = 0;
        // cout << count << endl;//4
        sort(c.begin(), c.end(), greater<int>());
        for (int i = 0; i < c.size() && n - count > 0; i++)
        {
            // cout << c[i] << endl; //2 1 1
            count = count + c[i];
            ans++;
        }
        if (count < n)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}