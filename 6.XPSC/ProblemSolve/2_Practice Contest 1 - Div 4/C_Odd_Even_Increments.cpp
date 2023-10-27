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

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int odd_count = 0;
        int even_count = 0;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] % 2 == 0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }
        int flag = 0;
        if (n == 2 || even_count == n || odd_count == n)
        {
            cout << "YES" << endl;
            continue;
        }
        else if (a[0] % 2 == 0)
        {
            for (int i = 0; i < n; i += 2)
            {
                if (a[i] % 2 != 0)
                {
                    flag = 1;
                    break;
                }
            }
            for (int i = 1; i < n; i += 2)
            {
                if (a[i] % 2 == 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        else if (a[0] % 2 != 0)
        {
            for (int i = 0; i < n; i += 2)
            {
                if (a[i] % 2 == 0)
                {
                    flag = 1;
                    break;
                }
            }
            for (int i = 1; i < n; i += 2)
            {
                if (a[i] % 2 != 0)
                {
                    flag = 1;
                    break;
                }
            }
        }

        cout << (flag == 0 ? "YES" : "NO") << endl;
    }

    return 0;
}
