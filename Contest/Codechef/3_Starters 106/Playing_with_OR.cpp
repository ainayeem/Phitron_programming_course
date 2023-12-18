#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int count = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i <= n - k; ++i)
        {
            int b = a[i];
            for (int j = i; j < i + k; ++j)
            {
                // cout << a[j] << " ";
                b |= a[j];
            }
            // cout << "\n";
            if (b % 2 != 0)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
