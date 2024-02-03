#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int flag = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            int mask = 1 << j;
            if ((i & mask) == 0)
            {
                sum -= a[j];
            }
            else
            {
                sum += a[j];
            }
        }
        // cout << sum << endl;
        if (sum % 360 == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    // cout << (1 << n) << endl; //8 2^n

    return 0;
}

// trick: a & b & c == x
// then x & a == x