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

        for (int i = 1; i <= k; i++)
        {
            cout << i << " ";
        }
        int a = k + 2;
        int b = k + 1;
        while (a <= n)
        {
            cout << a << " ";
            a += 2;
        }
        while (b <= n)
        {
            cout << b << " ";
            b += 2;
        }

        cout << endl;
    }

    return 0;
}