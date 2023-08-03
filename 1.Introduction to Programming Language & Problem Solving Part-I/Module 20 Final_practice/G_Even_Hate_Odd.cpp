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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        int mx, key;
        if (even > odd)
        {
            mx = even;
        }
        else
        {
            mx = odd;
        }
        if (n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else if (even == odd)
        {
            cout << "0" << endl;
        }
        else
        {
            key = mx - (n / 2);
            cout << key << endl;
        }
    }

    return 0;
}