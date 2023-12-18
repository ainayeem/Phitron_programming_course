#include <bits/stdc++.h>
#define ll long long
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int crsd = 0;
        int pv = a[0];
        for (int i = 1; i < n; i++)
        {
            if (pv >= a[i] || a[i] == a[i + 1])
            {
                crsd++;
            }
            // if ()
            // {
            //     crsd++;
            // }
            pv += a[i];
        }
        cout << crsd << endl;

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}