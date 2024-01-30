#include <bits/stdc++.h>
#define ll long long
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        int c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b, b + n);

        for (int i = 0; i < n; i++)
        {
            c[i] = a[i] + b[i];
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << endl;
        // }
        int flag = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (c[i] != c[i + 1])
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            for (int i = 0; i < n; i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}