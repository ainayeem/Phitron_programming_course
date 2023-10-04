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
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int op = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] > i)
            {
                op = max(op, (a[i] - i));
            }
        }
        cout << op << endl;
    }

    return 0;
}