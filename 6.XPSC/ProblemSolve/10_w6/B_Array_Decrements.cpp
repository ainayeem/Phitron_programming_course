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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int dif = -1, zeroDif = -1;
        bool impsbl = false;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                impsbl = true;
                break;
            }
            if (b[i] != 0)
            {
                if (dif == -1)
                {
                    dif = a[i] - b[i];
                }
                else
                {
                    if (a[i] - b[i] != dif)
                    {
                        impsbl = true;
                        break;
                    }
                }
            }
            else
            {
                zeroDif = max(zeroDif, a[i] - b[i]);
            }
        }
        if (impsbl)
        {
            cout << "NO" << endl;
            continue;
        }
        if (dif == -1 || zeroDif <= dif)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}