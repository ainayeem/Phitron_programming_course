#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        char a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        long long int boy = 0, girl = 0;

        for (int i = 0; i < n; i++)
        {
            // cout << a[i] << " " << b[i] << endl;

            if (a[i] == 'R' && b[i] == 'S')
            {
                boy++;
            }
            else if (a[i] == 'S' && b[i] == 'P')
            {
                boy++;
            }
            else if (a[i] == 'P' && b[i] == 'R')
            {
                boy++;
            }
            //
            else if (a[i] == 'S' && b[i] == 'R')
            {
                girl++;
            }
            else if (a[i] == 'P' && b[i] == 'S')
            {
                girl++;
            }
            else if (a[i] == 'R' && b[i] == 'P')
            {
                girl++;
            }
        }
        cout << boy << " " << girl << endl;
        if (boy < girl)
        {
            cout << 1 + (girl - boy) / 2 << endl;
        }
        else if (boy > girl)
        {
            cout << 0 << endl;
        }
        // else
        // {
        //     cout << boy + 1 << endl;
        // }
        //
    }

    return 0;
}