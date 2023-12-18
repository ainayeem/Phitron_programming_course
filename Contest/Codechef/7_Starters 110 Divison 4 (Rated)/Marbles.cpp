#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        // int ub = 0;
        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int c1 = 0;
            int c = a, d = b;
            while (c >= 1 && d >= 1)
            {
                if (c % d == 0)
                {
                    break;
                }
                c++;
                d--;
                c1++;
            }
            int c2 = 0;
            int e = a, f = b;
            while (e >= 1 && f >= 1)
            {
                if (e % f == 0)
                {
                    break;
                }
                e--;
                f++;
                c2++;
            }
            if (e < f)
            {
                c2 = INT_MAX;
            }
            cout << min(c1, c2) << endl;
        }
    }

    return 0;
}
