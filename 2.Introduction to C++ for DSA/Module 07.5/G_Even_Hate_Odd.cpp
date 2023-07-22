#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int even = 0;
        int odd = 0;
        int match, res, resab;
        if (n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                // cout << ar[i];
                if (ar[i] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
            if (even == odd)
            {
                cout << "0" << endl;
            }
            else
            {
                match = n / 2;
                res = even - match;
                resab = abs(res);
                cout << resab << endl;
            }
        }
    }

    return 0;
}