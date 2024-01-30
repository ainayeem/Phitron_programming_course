#include <bits/stdc++.h>
#define ll long long
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int product = 1;
        for (int i = 0; i < n; i++)
        {
            product *= b[i];
        }

        if (2023 % product == 0)
        {
            YES;
            cout << 2023 / product << " ";
            for (int i = 1; i < k; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            NO
        }
    }

    return 0;
}