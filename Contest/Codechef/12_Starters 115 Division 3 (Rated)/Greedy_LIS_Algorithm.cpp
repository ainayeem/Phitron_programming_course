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
        int n, x;
        cin >> n >> x;

        if (x == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << i + 1 << " ";
            }
            cout << endl;
            continue;
        }
        if (n - x <= 1)
        {
            cout << -1 << endl;
            continue;
        }

        int a = n - 1 - x; // 3
        cout << a << " ";
        int h = 1;
        for (int i = 1; i < n; i++)
        {
            if (i == a)
            {
                h += 1;
            }
            cout << h << " ";
            h += 1;
        }
        cout << endl;
    }

    return 0;
}