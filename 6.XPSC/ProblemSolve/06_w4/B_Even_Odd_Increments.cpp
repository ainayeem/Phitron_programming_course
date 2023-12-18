#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        ll tmp, eCnt = 0, oCnt = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            if (tmp % 2 == 0)
            {
                eCnt++;
                sum += tmp;
            }
            else
            {
                oCnt++;
                sum += tmp;
            }
        }
        while (q--)
        {
            int type, x;
            cin >> type >> x;

            if (type == 1)
            {
                sum += oCnt * x;
                if (x & 1) // checking x even or odd(bcx od+od=even)
                {
                    eCnt += oCnt;
                    oCnt = 0;
                }
            }
            else
            {
                sum += eCnt * x;
                if (x & 1)
                {
                    oCnt += eCnt;
                    eCnt = 0;
                }
            }
            cout << sum << endl;
        }
    }

    return 0;
}